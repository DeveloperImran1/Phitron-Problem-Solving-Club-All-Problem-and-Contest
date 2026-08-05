#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, k;
    cin >> x >> y >> k;

    int res = abs(x - y);

    if (res <= k)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}