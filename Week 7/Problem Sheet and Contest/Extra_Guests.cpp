#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;
    if (y <= x)
    {
        cout << x * 100 << endl;
    }
    else
    {
        int extra = y - x;
        cout << (x * 100) + (extra * 150);
    }
    return 0;
}