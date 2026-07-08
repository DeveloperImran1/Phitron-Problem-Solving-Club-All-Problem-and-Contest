

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
        int n, m;
        cin >> n >> m;
        int ans = 0;
        ans += m;
        m = m - (2 * n);
        while (m >= 0)
        {

            ans += m;
            ans += m + 1;
            m = m - (2 * n);
        }

        cout << ans << endl;
    }

    return 0;
}