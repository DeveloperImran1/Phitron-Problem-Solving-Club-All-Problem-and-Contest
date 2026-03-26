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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        map<int, int> i_v_for_l;
        for (int i = 0; i < n; i++)
        {
            auto it = i_v_for_l.find(v[i]);
            if (it == i_v_for_l.end())
            {
                i_v_for_l[v[i]] = i;
            }
        }
        map<int, int> i_v_for_r;
        for (int i = 0; i < n; i++)
        {
            i_v_for_r[v[i]] = i;
        }

        while (k--)
        {
            int l, r;
            cin >> l >> r;
            int l_idx = -1, r_idx = -1;

            auto it = i_v_for_l.find(l);
            if (it != i_v_for_l.end())
            {
                l_idx = it->second;
            }
            auto it2 = i_v_for_r.find(r);
            if (it2 != i_v_for_r.end())
            {
                r_idx = it2->second;
            }

            if (l_idx != -1 && r_idx != -1 && l_idx < r_idx)
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