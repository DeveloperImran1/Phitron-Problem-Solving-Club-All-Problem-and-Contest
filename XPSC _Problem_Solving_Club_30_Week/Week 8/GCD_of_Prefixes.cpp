#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<int> v1(n);
        v1 = v;
        sort(v1.begin(), v1.end(), greater<int>());
        int is_posible = 1;
        if (v != v1)
        {
            cout << -1 << endl;
            continue;
        }

        int initial_gcd = v[0];
        for (int i = 0; i < n; i++)
        {
            int current_gcd = __gcd(initial_gcd, v[i]);
            if (current_gcd != v[i])
            {
                is_posible = 0;
                break;
            }
        }

        if (!is_posible)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}