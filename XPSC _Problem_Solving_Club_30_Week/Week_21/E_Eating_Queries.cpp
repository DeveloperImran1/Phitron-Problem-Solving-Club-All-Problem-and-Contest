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
        vector<long long int> pre(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end(), greater<int>());
        for (int i = 1; i <= n; i++)
        {
            pre[i] = pre[i - 1] + v[i - 1];
        }

        while (k--)
        {
            int key;
            cin >> key;
            auto it = lower_bound(pre.begin(), pre.end(), key);
            if (it == pre.end())
            {
                cout << -1 << endl;
            }
            else
            {
                int ans = it - pre.begin();
                cout << ans << endl;
            }
        }
    }

    return 0;
}