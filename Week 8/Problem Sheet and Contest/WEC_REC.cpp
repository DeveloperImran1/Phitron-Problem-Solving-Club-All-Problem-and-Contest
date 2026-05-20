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
        int n, x, k;
        cin >> n >> x >> k;

        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }

        int total = 0;
        int j = 1;
        for (auto val = mp.rbegin(); val != mp.rend() && j <= k; ++val, j++)
        {
            total += val->second;
        }

        cout << min(x, total) << endl;
    }

    return 0;
}