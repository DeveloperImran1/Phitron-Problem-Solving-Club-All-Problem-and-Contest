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
        long long int a, b, c;
        cin >> b >> c;
        long long int res = (b * c) / __gcd(b, c);
        cout << res / b << endl;
     }

    return 0;
}