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

        int count = 0;
        while (true)
        {
            int mn = min(x, y);
            int mx = max(x, y);
            int total = mn * mx;
            if (total >= z)
            {
                cout << count << endl;
                break;
            }

            if (x <= y)
            {
                x++;
            }
            else
            {
                y++;
            }
            count++;
        }
    }

    return 0;
}