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
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }

        vector<int> temp_v;
        for (auto [key, val] : mp)
        {
            if (val >= k)
            {
                temp_v.push_back(key);
            }
        }

        if (temp_v.size() == 0)
        {
            cout << -1 << endl;
            continue;
        }

        vector<vector<int>> new_v;
        vector<int> temp;
        int target_val = temp_v[0];
        for (int i = 0; i < temp_v.size(); i++)
        {
            // cout << temp_v[i] << " ";
            if (temp_v[i] == target_val)
            {
                temp.push_back(temp_v[i]);
                target_val = temp_v[i] + 1;
            }
            else
            {
                new_v.push_back(temp);
                temp.clear();
                temp.push_back(temp_v[i]);
                target_val = temp_v[i] + 1;
            }
        }
        new_v.push_back(temp);

        int mx = 0;
        int l, r;
        for (int i = 0; i < new_v.size(); i++)
        {
            int len = new_v[i].size() - 1;
            int differece = new_v[i][len] - new_v[i][0];
            if (differece >= mx)
            {
                mx = differece;
                l = new_v[i][0];
                r = new_v[i][len];
            }
        }
        cout << l << " " << r << endl;
    }

    return 0;
}