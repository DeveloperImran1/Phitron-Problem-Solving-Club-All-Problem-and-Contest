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
        int a, b, c;
        cin >> a >> b >> c;
        while (c > 0)
        {
            b = b - 1;
            c = c - 3;
        }
        if (b < 0 || c < 0)
        {
            cout << "No" << endl;
            continue;
        }

        while (a > 0)
        {
            a = a - 1;
            b = b - 2;
        }

        if (a < 0 || b < 0)
        {
            cout << "No" << endl;
        }
        else
        {
            if (a == 0 && b == 0 && c == 0)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}