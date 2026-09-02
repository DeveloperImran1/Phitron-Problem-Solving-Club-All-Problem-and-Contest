#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        if (n % 2 == 0)
        {
            ans = (n / 2) * 30;
        }
        else
        {
            ans = 20;
            ans += (n / 2) * 30;
        }
        cout << ans << endl;
    }

    return 0;
}