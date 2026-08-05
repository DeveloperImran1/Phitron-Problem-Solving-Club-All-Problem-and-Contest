

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

        int high_dif = 0;
        int mn = 0;
        int mx = 2e9;

        for (int i = 0, j = n - 1; i < j; i++, j--)
        {
            int u = min(v[i], v[j]);
            int val_v = max(v[i], v[j]);
            int diff = val_v - u;

            high_dif = max(high_dif, diff);

            if (diff == 2)
            {
                mn = max(mn, u);
                mx = min(mx, u + 1);
            }
        }

        if (high_dif > 2 || mn > mx)
        {
            cout << "No\n";
            continue;
        }

        int x = mx;

        for (int i = 0; i < n; i++)
        {
            if (v[i] <= x)
            {
                v[i]++;
            }
            else
            {
                v[i]--;
            }
        }

        int is_posible = 1;
        for (int i = 0, j = n - 1; i < j; i++, j--)
        {
            if (v[i] != v[j])
            {
                is_posible = 0;
            }
        }

        if (is_posible)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}