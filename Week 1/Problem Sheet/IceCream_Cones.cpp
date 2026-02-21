#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n;
        cin >> x >> y >> n;
        int total_loss = y * n;
        int res = x - total_loss;
        if (res > 0)
        {
            cout << res << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}