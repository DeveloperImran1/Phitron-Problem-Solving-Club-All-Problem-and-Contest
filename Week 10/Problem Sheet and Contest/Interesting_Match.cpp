#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    int mn = min(a, b);
    int mx = max(a, b);
    if (mx - mn <= 2)
    {
        cout << "Interesting";
    }
    else
    {
        cout << "Boring";
    }
    return 0;
}