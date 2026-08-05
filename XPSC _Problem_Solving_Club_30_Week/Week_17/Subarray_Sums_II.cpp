#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n, k;
    cin >> n >> k;
    vector<long long int> a(n);
    for (int i = 0; i < n; i++)
    {
        long long int val;
        cin >> val;
        a[i] = val;
    }

    vector<long long int> pre(n + 1);
    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + a[i - 1];
    }

    map<long long int, long long int> mp;
    mp[0] = 1;
    long long int res = 0;
    for (int r = 1; r <= n; r++)
    {
        long long int target = pre[r] - k;
        res += mp[target];
        mp[pre[r]]++;
    }

    cout << res;

    return 0;
};