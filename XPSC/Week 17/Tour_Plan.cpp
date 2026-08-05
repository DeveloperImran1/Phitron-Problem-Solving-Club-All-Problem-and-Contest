#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;
    if (z <= 50)
    {
        cout << x;
    }
    else
    {
        int extra = z - 50;
        int taka = y * extra;
        cout << x + taka;
    }
    return 0;
}