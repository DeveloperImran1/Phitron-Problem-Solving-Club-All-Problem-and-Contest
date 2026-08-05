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
        int total_zero = 0;
        int max_exist_count = 0;
        int max_exist_val = 0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v[i] = val;
            if (val != 0)
            {
                mp[val]++;
            }

            if (mp[val] > max_exist_count)
            {
                max_exist_count = mp[val];
                max_exist_val = val;
            }
            if (val == 0)
            {
                total_zero++;
            }
        }

        mp[max_exist_val] += total_zero;
        //   cout << max_exist_val << " " << max_exist_count << " " << total_zero << endl;

        int ans = 0;
        for (auto [key, val] : mp)
        {
            if (val < 2)
            {
                continue;
            }

            for (int i = 1; i <= val; i++)
            {
                for (int j = i + 1; j <= val; j++)
                {
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}