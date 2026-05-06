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
        vector<int> v(n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            cin >> v[i];
        }
        vector<int> new_v(n);
        for (int i = 0; i < n - 1; i++)
        {
            new_v[i + 1] = v[i] | v[i + 1];
        }
        new_v[0] = v[0];
        new_v[n - 1] = v[n - 2];

        int is_posible = 1;

        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] != (new_v[i] & new_v[i + 1]))
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
                cout << new_v[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}