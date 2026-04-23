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
        vector<int> a(n);
        vector<int> h(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }

        if (n == 1)
        {
            if (a[0] <= k)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
            continue;
        }

        int l = 0, r = 1, res = 0;
        long long int sum = a[0];
        if (sum <= k)
            res = 1;

        while (r < n)
        {
            if (h[r - 1] % h[r] == 0)
            {
                sum += a[r];
            }
            else
            {
                l = r;
                sum = a[r];
                // if (sum <= k)
                // {
                //     res = max(res, 1);
                // }
                // r++;
                // continue;
            }

            while (l <= r && sum > k)
            {
                sum -= a[l];
                l++;
            }

            res = max(res, r - l + 1);
            r++;
        }

        cout << res << endl;
    }

    return 0;
}