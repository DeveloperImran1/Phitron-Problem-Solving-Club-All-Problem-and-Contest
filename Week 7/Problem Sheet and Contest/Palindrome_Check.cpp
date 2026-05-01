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
        int n, k;
        cin >> n >> k;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }

        int l = 1, r = n;
        int is_posible = 1;
        while (l <= r)
        {
            if (v[l] == v[r])
            {
                l++, r--;
            }
            else if (v[l] == k)
            {
                l++;
            }
            else if (v[r] == k)
            {
                r--;
            }
            else
            {
                is_posible = 0;
                break;
            }
        }

        if (is_posible)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}