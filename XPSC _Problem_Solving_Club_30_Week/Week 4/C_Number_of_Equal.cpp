#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int l = 0, r = 0, current = a[0], count1 = 0, count2 = 0;
    long long int ans = 0;
    while (l < n && r < m)
    {
        current = a[l];
        count1 = 0, count2 = 0;
        while (l < n && a[l] == current)
        {
            count1++, l++;
        }

        while (r < m && b[r] < current)
        {
            r++;
        }
        while (r < m && b[r] == current)
        {
            count2++, r++;
        }

        ans += (1LL * count1 * count2); // 1LL er maddhome count1*count2 kore inline a long long a convert kore nissi.
    }
    cout << ans;
    return 0;
}