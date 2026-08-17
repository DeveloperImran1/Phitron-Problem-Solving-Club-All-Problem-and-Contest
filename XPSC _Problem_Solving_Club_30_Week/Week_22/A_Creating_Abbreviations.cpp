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
        int n, m;
        cin >> n >> m;
        map<char, int> mp;
        while (n--)
        {
            string s;
            cin >> s;
            transform(s.begin(), s.end(), s.begin(), ::tolower);
            // for (char c : s)
            // {
            //     mp[c]++;
            // }
            mp[s[0]]++;
        }

        int is_zero = 0;
        while (m--)
        {
            string s;
            cin >> s;
            transform(s.begin(), s.end(), s.begin(), ::tolower);

            for (char c : s)
            {
                if (mp.count(c))
                {
                }
                else
                {
                    is_zero = 1;
                    break;
                }
            }

            // if (is_zero)
            // {
            //     break;
            // }
        }

        // for (auto [key, val] : mp)
        // {
        //     cout << key << " " << val << endl;
        // }

        if (is_zero)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}