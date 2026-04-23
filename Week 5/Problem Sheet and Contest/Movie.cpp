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
        int n, m, a, b, c;
        cin >> n >> m >> a >> b >> c;

        long long int amount = 0;
        if (n <= m && n > 0)
        {
            amount += n * c;
            amount += (m - n) * b;
        }
        else
        {
            amount += m * c;
            amount += (n - m) * a;
        }
        cout << amount << endl;
    }

    return 0;
}