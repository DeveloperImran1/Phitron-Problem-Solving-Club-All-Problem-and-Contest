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
        int n;
        cin >> n;
        string a, b, c;
        cin >> a >> b >> c;
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i])
            {
                if (a[i] != c[i])
                {
                    res = 1;
                    break;
                }
            }
            else
            {
                if (a[i] != c[i] && b[i] != c[i])
                {
                    res = 1;
                    break;
                }
            }
        }

        if (res)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}