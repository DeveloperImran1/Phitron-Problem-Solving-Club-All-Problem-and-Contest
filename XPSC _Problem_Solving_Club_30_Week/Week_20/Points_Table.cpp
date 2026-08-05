#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a > c)
    {
        cout << "Alice";
    }
    else if (c > a)
    {
        cout << "Bob";
    }
    else if (a == c)
    {
        if (b > d)
        {
            cout << "Alice";
        }
        else if (d > b)
        {
            cout << "Bob";
        }
        else
        {
            cout << "Alice";
        }
    }
    return 0;
}