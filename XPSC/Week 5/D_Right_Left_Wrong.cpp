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
        vector<long long int> pre(n + 1);
        for (int i = 1; i <= n; i++)
        {
            pre[i] = pre[i - 1] + v[i - 1];
        }

        // for (int i = 0; i <= n; i++)
        // {
        //     cout << pre[i] << " ";
        // }

        int l = 0, r = n - 1;
        long long int sum = 0;
        while (l < r)
        {
            if (s[l] == 'L')
            {
                if (s[r] == 'R')
                {
                    // cout << l << " " << r << endl;
                    sum += pre[r + 1] - pre[l];
                    l++;
                }
                r--;
            }
            else
            {
                l++;
            }
        }

        cout << sum << endl;
    }

    return 0;
}