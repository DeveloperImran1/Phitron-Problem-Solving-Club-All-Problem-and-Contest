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
        double x, y;
        cin >> x >> y;
        double n = ceil(y / 2);
        int remain_1 = (n * 15) - (y * 4);

        if (x <= remain_1)
        {
            cout << n << endl;
        }
        else
        {
            double remain_2 = x - remain_1;
            double res = ceil(remain_2 / 15);
            cout << n + res << endl;
        }
    }

    return 0;
}