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
        int m, n;
        cin >> m >> n;
        if (m == n)
        {
            cout << 0 << endl;
        }
        else if (m > n)
        {
            cout << m - n << endl;
        }
        else if (m < n)
        {

            while (n > m)
            {
                m--;
                n -= 3;
            }

            cout << m - n << endl;
        }
    }

    return 0;
}