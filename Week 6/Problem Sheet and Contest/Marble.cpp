#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;
    int i = 1;
    while (1)
    {
        int n, q;
        cin >> n >> q;
        if (n == 0 && q == 0)
        {
            break;
        }
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            if (mp.count(v[i]) == 0)
            {
                mp[v[i]] = i;
            }
        }

        // for (auto [key, val] : mp)
        // {
        //     cout << key << " " << val << endl;
        // }

        cout << "CASE# " << i << ":" << endl;
        while (q--)
        {
            int k;
            cin >> k;

            if (mp.count(k))
            {
                // cout << "CASE# 1:" << endl;
                // cout << "CASE# " << i << ":" << endl;
                cout << k << " found at " << mp[k] + 1 << endl;
            }
            else
            {

                cout << k << " not found" << endl;
            }
        }
        i++;
    }

    return 0;
}