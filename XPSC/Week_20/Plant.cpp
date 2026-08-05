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
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int current = min(v[i], v[i + 1]);
            ans = max(ans, current);
        }

        cout << ans << endl;
    }

    return 0;
}