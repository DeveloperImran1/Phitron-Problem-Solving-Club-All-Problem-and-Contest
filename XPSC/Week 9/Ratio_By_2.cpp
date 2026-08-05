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
        if (y >= (2 * x) || x >= (2 * y))
        {
            cout << 0 << endl;
            continue;
        }

        int mn = INT_MAX;
        if (x <= y)
        {
            int mid = y / 2;
            int need = x - mid;
            mn = min(mn, need);
        }
        else
        {
            int mid = x / 2;
            int need = y - mid;
            mn = min(mn, need);
        }
        cout << mn << endl;
    }

    return 0;
}