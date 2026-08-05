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
        vector<char> v(n + 1);
        for (int i = 0; i < n; i++)
        {
            v[i + 1] = s[i];
        }

        vector<int> res_v;
        for (int p = 1; p <= n; p++)
        {
            if (v[p] == 'L')
            {
                res_v.push_back(p - 1);
            }
            else if (v[p] == 'R')
            {
                res_v.push_back(n - p);
            }
        }

        long long int current_total = 0;
        for (int r : res_v)
        {
            current_total += r;
        }

        int l_idx = 1, r_idx = n, loop = 1;
        int k = n;

        while (l_idx <= r_idx)
        {
            if (loop % 2 == 1)
            {
                if (v[l_idx] == 'L')
                {
                    v[l_idx] = 'R';
                    current_total = (current_total - res_v[l_idx - 1]) + (n - l_idx);
                    res_v[l_idx - 1] = n - l_idx;
                    cout << current_total << " ";
                    k--;
                }
                l_idx++;
            }
            else
            {
                if (v[r_idx] == 'R')
                {
                    v[r_idx] = 'L';
                    current_total = (current_total - res_v[r_idx - 1]) + (r_idx - 1);
                    res_v[r_idx - 1] = r_idx - 1;
                    cout << current_total << " ";
                    k--;
                }
                r_idx--;
            }

            loop++;
        }

        while (k--)
        {
            cout << current_total << " ";
        }

        cout << endl;
    }

    return 0;
}