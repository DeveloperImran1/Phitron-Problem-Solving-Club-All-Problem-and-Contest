#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int ans = 0;
    ans += max(a, b);
    ans += max(c, d);
    ans += max(e, f);
    cout << ans;
    return 0;
}