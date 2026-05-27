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
        float d, x, y;
        cin >> d >> x >> y;
        if (y >= x)
        {
            cout << 0 << endl;
            continue;
        }

        float sort = x - y;
        float hundread = 100.00;
        float discounted_taka = ((x * d) / hundread);
        float available_taka = discounted_taka;

        if (discounted_taka == 0)
        {
            cout << -1 << endl;
            continue;
        }
        // cout << sort << " " << discounted_taka << " " << available_taka << endl;
        float ans = -1;
        for (float i = 1; i <= y; i++)
        {
            sort++;
            available_taka = discounted_taka * i;
            if (available_taka >= sort)
            {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}