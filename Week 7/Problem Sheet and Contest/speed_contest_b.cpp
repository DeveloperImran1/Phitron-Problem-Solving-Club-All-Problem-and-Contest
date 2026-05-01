#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int res = m - n;
    if (res < n)
    {
        cout << res;
    }
    else
    {
        cout << n;
    }
    return 0;
}