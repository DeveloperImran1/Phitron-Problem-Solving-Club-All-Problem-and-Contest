#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z;
    cin >> x >> y >> z;
    int india = x + z;
    if (y > india)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << india - y + 1;
    }
    return 0;
}