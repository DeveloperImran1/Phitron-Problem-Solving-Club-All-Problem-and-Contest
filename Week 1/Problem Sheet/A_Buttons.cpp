#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    if (x > y && (x - y) == 1)
    {
        cout << (x + y);
    }
    else if (x > y)
    {
        cout << (x + x) - 1;
    }
    else if (y > x && (y - x) == 1)
    {
        cout << (x + y);
    }
    else if (y > x)
    {
        cout << (y + y) - 1;
    }
    else
    {
        cout << (x + y);
    }
    return 0;
}