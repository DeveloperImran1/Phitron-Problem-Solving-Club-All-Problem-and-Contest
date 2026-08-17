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
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int sum1 = x1 + y1;
        int sum2 = x2 + y2;
        if ((sum1 % 2 == 0 && sum2 % 2 != 0) || (sum1 % 2 != 0 && sum2 % 2 == 0))
        {
            cout << -1 << endl;
            continue;
        }

        int dif1 = abs(x1 - x2);
        int dif2 = abs(y1 - y2);
        if (dif1 == dif2)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }

    return 0;
}