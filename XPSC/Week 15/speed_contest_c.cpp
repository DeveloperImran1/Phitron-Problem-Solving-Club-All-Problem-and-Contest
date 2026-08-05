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
        int r, b, g;
        cin >> r >> b >> g;
        long long int res = 0;
        while (r != 0 && b != 0 && g != 0)
        {
            res += 10;
            r--, b--, g--;
        }

        res += (r * 3);
        res += (b * 3);
        res += (g * 3);

        cout << res << endl;
    }

    return 0;
}