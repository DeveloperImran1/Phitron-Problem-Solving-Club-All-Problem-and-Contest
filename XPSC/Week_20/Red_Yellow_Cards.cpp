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
        int r, y;
        cin >> r >> y;
        if (r == 0)
        {
            cout << y / 2 << endl;
        }
        else if (y == 0)
        {
            cout << r << endl;
        }
        else
        {
            int count = r;
            y -= r;
            y--;

            if (y > 0)
            {
                count += ((y + 1) / 2);
            }
            cout << count << endl;
        }
    }

    return 0;
}