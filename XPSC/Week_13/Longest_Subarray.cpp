#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;
    vector<int> v;
    int val;
    while (cin >> val)
    {
        v.push_back(val);
    }

    int n = v.size();

    vector<long long int> pre(n + 1);

    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + v[i - 1];
    }

    long long int ans = 0;
    map<long long int, long long int> mp;
    mp[0] = 0;
    for (int r = 1; r <= n; r++)
    {
        long long int y = pre[r] - k;

        if (mp.find(y) != mp.end())
        {
            ans = max(ans, r - mp[y]);
        }
        if (mp.find(pre[r]) == mp.end())
        {
            mp[pre[r]] = r;
        }
    }

    cout << ans;
    return 0;
}