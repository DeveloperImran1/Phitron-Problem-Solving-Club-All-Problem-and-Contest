#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long int k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int l = 0, r = 0;
    long long int count = 0, sum = 0, ans = 0;
    while (r < n)
    {
        sum += v[r];
        if (sum <= k)
        {
            r++;
            count++;
            ans = max(ans, count);
        }
        else if (sum > k)
        {
            sum -= v[l];
            l++, r++;
        }
    }

    // if (sum <= k)
    // {
    //     count++;
    //     ans = max(ans, count);
    // }

    cout << ans << endl;

    return 0;
}