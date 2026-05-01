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
        // if (x == 1 && y == 1)
        // {
        //     cout << "NO" << endl;
        //     continue;
        // }

        // if (x - y >= 4 || y - x >= 4)
        // {
        //     cout << "NO" << endl;
        //     continue;
        // }

        // cout << "YES" << endl;

        if (x % 2 == 1 && y % 2 == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    }

    return 0;
}