#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }

    sort(v.begin(), v.end(), greater<int>());
    int res = 0, l = 1, r = v[0];
    while (l <= r)
    {
        int mid = (l + r) / 2;
        long long int total = 0;
        for (int j = 0; j < n; j++)
        {
            int divide = v[j] / mid;
            if (divide == 0)
            {
                break;
            }
            total += divide;
        }
        if (total >= m)
        {
            res = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << res;

    return 0;
}