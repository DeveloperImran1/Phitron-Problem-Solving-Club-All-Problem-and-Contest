#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, t;
    cin >> a >> b >> t;

    int count = 0;
    for (int i = a; i <= t; i += a)
    {
        count += b;
    }
    cout << count;

    return 0;
}