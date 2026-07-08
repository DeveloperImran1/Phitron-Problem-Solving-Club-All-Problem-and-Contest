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
        int x, y;
        cin >> x >> y;
        int ans = 0;
        while (x > y)
        {
            int res = ceil(float(x) / 10.00);
            ans += res;
            x--;
        }
        cout << ans << endl;
    }

    return 0;
}