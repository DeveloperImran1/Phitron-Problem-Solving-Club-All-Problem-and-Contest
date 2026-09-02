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
        vector<int> v(n);
        long long int total_sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            total_sum += v[i];
        }

        vector<long long int> l_pref_sum(n + 1);
        vector<long long int> r_pref_sum(n + 1);

        l_pref_sum[0] = 0;
        r_pref_sum[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            l_pref_sum[i] = l_pref_sum[i - 1] + v[i - 1];
        }
        for (int i = 1, j = n; i <= n; i++, j--)
        {
            r_pref_sum[i] = r_pref_sum[i - 1] + v[j - 1];
        }

        long long int mx = 0;
        for (int i = m, j = 0; j <= m; i--, j++)
        {
            mx = max(mx, total_sum - (l_pref_sum[i] + r_pref_sum[j]));
        }
        cout << mx << endl;
    }

    return 0;
}