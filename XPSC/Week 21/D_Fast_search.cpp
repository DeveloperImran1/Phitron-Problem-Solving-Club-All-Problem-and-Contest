#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int q;
    cin >> q;
    while (q--)
    {
        int l_val, r_val;
        cin >> l_val >> r_val;
        int l = 0, r = n - 1, l_idx = -1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (v[mid] >= l_val)
            {
                l_idx = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        int l_1 = 0, r_1 = n - 1, r_idx = -1;
        while (l_1 <= r_1)
        {
            int mid = l_1 + (r_1 - l_1) / 2;
            if (v[mid] <= r_val)
            {
                r_idx = mid;
                l_1 = mid + 1;
            }
            else
            {
                r_1 = mid - 1;
            }
        }

        if (l_idx == -1 || r_idx == -1 || l_idx > r_idx)
        {
            cout << 0 << " ";
        }
        else
        {
            int ans = (r_idx - l_idx);
            cout << ans + 1 << " ";
        }
    }

    return 0;
}