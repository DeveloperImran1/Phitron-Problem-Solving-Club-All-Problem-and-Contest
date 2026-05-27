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
        string s;
        cin >> s;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int val = s[i] - 48;
            mp[val]++;
        }
        // for (auto [key, val] : mp)
        // {
        //     cout << key << " " << val << endl;
        // }

        int count = 0;
        for (int k = 1; k <= n; k++)
        {
            int extra_for_0 = k - mp[0];
            if (extra_for_0 >= 0 && extra_for_0 % 2 == 0)
            {
                count++;
                continue;
            }
            int extra_for_1 = k - mp[1];
            if (extra_for_1 >= 0 && extra_for_1 % 2 == 0)
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}