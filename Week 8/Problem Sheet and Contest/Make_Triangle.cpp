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
        int x, y, z;
        cin >> x >> y >> z;
        int ans = 0;
        while (1)
        {
            if ((x + y > z) && (y + z > x) && (x + z > y))
            {
                cout << ans << endl;
                break;
            }

            int mn = INT_MAX;
            if (x < y && x < z)
            {
                mn = x;
                x++;
                ans++;
            }
            else if (y < x && y < z)
            {
                mn = y;
                y++;
                ans++;
            }
            else if (z < x && z < y)
            {
                mn = z;
                z++;
                ans++;
            }
            else if (x == y)
            {
                mn = x;
                x++;
                ans++;
            }
            else if (x == z)
            {
                mn = x;
                x++;
                ans++;
            }
            else if (y == z)
            {
                mn = y;
                y++;
                ans++;
            }

            if (ans > 1000)
            {
                cout << 0 << endl;
                break;
            }
        }
    }

    return 0;
}