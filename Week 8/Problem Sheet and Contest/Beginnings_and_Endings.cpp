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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }

        int ans = INT_MAX;
        for (auto [key, val] : mp)
        {
            if (val > 1)
            {
                int count = 0;
                int l = 0, r = n - 1;
                while (l <= r)
                {
                    if (v[l] != key)
                    {
                        count++;
                    }
                    else
                    {
                        break;
                    }
                    l++;
                }
                while (r >= 0)
                {
                    if (v[r] != key)
                    {
                        count++;
                    }
                    else
                    {
                        break;
                    }
                    r--;
                }

                ans = min(ans, count);
            }
        }

        if (ans == INT_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }

    return 0;
}