#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int k;
    cin >> k;

    int l = 0, r = 0, ans = -1;
    map<char, int> mp;
    while (r < s.size())
    {
        mp[s[r]]++;

        if (mp.size() > k)
        {
            while (mp.size() > k)
            {
                mp[s[l]]--;
                if (mp[s[l]] == 0)
                {
                    mp.erase(s[l]);
                }
                l++;
            }
        }

        if (mp.size() == k)
        {
            ans = max(ans, r - l + 1);
        }

        r++;
    }
    cout << ans << endl;

    return 0;
}