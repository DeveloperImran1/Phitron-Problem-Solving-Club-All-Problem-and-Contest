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
        int n, k;
        cin >> n >> k;

        if ((n + 1) % 3 == 0)
        {
            for (int i = 1; i <= n; i++)
            {
                if (i % 3 == 0)
                {
                    cout << 0 << " ";
                }
                else
                {
                    cout << 1 << " ";
                }
            }
            cout << endl;
        }

        // if (n == 3)
        // {
        //     cout << -1 << endl;
        //     continue;
        // }

        // int small = k / 2;
        // int big = k / 2;
        // if (k % 2 != 0)
        // {
        //     big++;
        // }
    }

    return 0;
}