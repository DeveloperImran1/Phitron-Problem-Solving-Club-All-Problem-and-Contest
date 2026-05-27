#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    int total = a + b + c;
    int remain = 4 - total;
    if ((a + remain) > c)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}