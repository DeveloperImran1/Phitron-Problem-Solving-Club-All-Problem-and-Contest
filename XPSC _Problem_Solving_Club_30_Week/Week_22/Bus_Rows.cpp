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
        int n, m, x;
        cin >> n >> m >> x;
        int total_row = (x + m - 1) / m;
        int res = min(total_row, n - total_row + 1);

        cout << res << endl;
    }

    return 0;
}