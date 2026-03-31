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

        vector<int> v(n + 1);
        for (int i = 0; i <= n; i++)
        {
            cin >> v[i];
        }

        int res = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int current_mx = max(v[i], v[i + 1]);
            res = min(res, current_mx);
        }
        cout << res << endl;
    }

    return 0;
}