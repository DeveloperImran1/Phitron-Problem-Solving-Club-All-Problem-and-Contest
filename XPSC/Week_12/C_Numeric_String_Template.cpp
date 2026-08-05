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

        map<int, set<int>> mp;
        for (int i = 0; i < n; i++)
        {
            auto it = mp.find(v[i]);
            if (it == mp.end())
            {
                set<int> s;
                s.insert(i);
                mp[v[i]] = s;
            }
            else
            {
                it->second.insert(i);
            }
        }

        set<set<int>> res1;
        for (auto [key, value] : mp)
        {
            res1.insert(value);
        }

        // for (auto s : res1)
        // {
        //     for (auto val : s)
        //     {
        //         cout << val << " ";
        //     }
        //     cout << endl;
        // }

        int m;
        cin >> m;
        while (m--)
        {
            string s;
            cin >> s;

            map<char, set<int>> mp2;
            for (int i = 0; i < s.size(); i++)
            {
                auto it = mp2.find(s[i]);
                if (it == mp2.end())
                {
                    set<int> s2;
                    s2.insert(i);
                    mp2[s[i]] = s2;
                }
                else
                {
                    it->second.insert(i);
                }
            }

            set<set<int>> res2;
            for (auto [key, value] : mp2)
            {
                res2.insert(value);
            }

            // for (auto s : res2)
            // {
            //     for (auto val : s)
            //     {
            //         cout << val << " ";
            //     }
            //     cout << endl;
            // }

            if (res1 == res2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}