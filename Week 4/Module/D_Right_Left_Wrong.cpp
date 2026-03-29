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

        string s;
        cin >> s;
        vector<pair<int, int>> res;
        int l = 0, r = n - 1;
        int left = -1, right = -1;
        while (l < r)
        {

            if (s[l] == 'L')
            {
                left = l;
            }
            if (s[r] == 'R')
            {
                right = r;
            }

            if (left != -1 && right != -1)
            {
                pair<int, int> p = {left, right};
                res.push_back(p);
                left = -1, right = -1;
            }

            if (left == -1)
            {
                l++;
            }
            if (right == -1)
            {
                r--;
            }
        }

        vector<long long int> kromo(n);
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                kromo[i] = v[i];
                continue;
            }
            kromo[i] = kromo[i - 1] + v[i];
        }

        // for (int i = 0; i < n; i++)
        // {
        //     cout << kromo[i] << " ";
        // }

        long long int mx = 0;

        for (auto [l, r] : res)
        {
            // cout << l << " " << r << endl;
            if (l == 0)
            {

                mx += kromo[r];
            }
            else
            {
                mx += kromo[r] - kromo[l - 1];
            }
        }
        cout << mx << endl;
        // cout << endl;
    }

    return 0;
}