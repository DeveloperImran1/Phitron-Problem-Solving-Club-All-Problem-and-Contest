
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
        long long int total_sum = 0;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v[i] = val;
            total_sum += val;
        }

        if (total_sum < k)
        {
            cout << -1 << endl;
            continue;
        }
        int l = 0, r = 0, count = 0, res = 0;
        while (r < n)
        {
            count += v[r];
            if (count <= k)
            {
                res = max(res, r - l + 1);
                r++;
            }
            else
            {
                while (l <= r && count > k)
                {
                    count -= v[l];
                    l++;
                }
                res = max(res, r - l + 1);
                r++;
            }
        }
        cout << n - res << endl;
    }

    return 0;
}