#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, b;
    cin >> r >> b;
    int mn = min(r, b);
    int res = mn * 5;
    cout << res + (r - mn) * 1 + (b - mn) * 2;

    return 0;
}