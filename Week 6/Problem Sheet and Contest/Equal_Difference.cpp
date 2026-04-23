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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<int> modified_v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            modified_v[i] = v[i] - (i + 1);
            mp[modified_v[i]]++;
        }

        long long int res = 0;
        for (auto [key, val] : mp)
        {
            int total = (val * (val - 1)) / 2;
            res += total;
        }
        cout << res << endl;
    }

    return 0;
}