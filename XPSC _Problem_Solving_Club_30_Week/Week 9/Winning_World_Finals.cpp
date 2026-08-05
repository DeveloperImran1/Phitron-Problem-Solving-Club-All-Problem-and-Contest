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
        int m, p;
        cin >> m >> p;

        int ans1 = 300 - m - 1;

        // cout << ans1 << " ";

        int current_min = m, current_p = p, ans2 = 0;
        for (; (current_min - 2) < 300 && (current_p + current_min) <= 1000;)
        {

            current_min++;
            current_p += 20;
            if ((current_p + current_min) <= 1000)
            {
                ans2++;
            }
        }

        int ans = min(ans1, (ans2));
        if (ans < 0)
        {
            ans = 0;
        }
        cout << ans << endl;
    }

    return 0;
}