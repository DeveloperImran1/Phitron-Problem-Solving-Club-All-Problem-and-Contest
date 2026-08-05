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
        int a, b, x;
        cin >> a >> b >> x;
        int red = a * b;
        int blue = x * x;

        if (blue >= red)
        {
            cout << 0 << endl;
            continue;
        }

        if (a >= b)
        {
            a = 1;
            red = a * b;
            if (blue >= red)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
        else
        {
            b = 1;
            red = a * b;
            if (blue >= red)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
    }

    return 0;
}