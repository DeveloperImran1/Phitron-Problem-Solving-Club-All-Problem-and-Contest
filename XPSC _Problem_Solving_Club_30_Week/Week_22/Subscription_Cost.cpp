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
        int n, x, y;
        cin >> n >> x >> y;
        if (n > 3)
        {
            int extra = n - 3;
            int res = 3 * x;
            res += (extra * y);

            cout << res << endl;
        }
        else
        {
            cout << n * x << endl;
        }
    }

    return 0;
}