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
        vector<int> v1(n), v2(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v1[i] >> v2[i];
        }

        int y = 10;
        for (int i = 0; i < n; i++)
        {
            if (y < v1[i])
            {
                y = v1[i];
            }

            if (y > v2[i])
            {
                y = v2[i];
            }

            if (y >= v1[i] && y <= v2[i])
            {
                y = y;
            }
        }
        // for (int i = 0; i < n; i++)
        // {
        //     if (y > v2[i])
        //     {
        //         y = v2[i];
        //     }
        // }
        // for (int i = 0; i < n; i++)
        // {
        //     if (y >= v1[i] && y <= v2[i])
        //     {
        //         y = y;
        //     }
        // }

        // for (int i = 0; i < n; i++)
        // {
        //     cout << v1[i] << " ";
        // }
        // cout << '\n';
        // for (int i = 0; i < n; i++)
        // {
        //     cout << v2[i] << " ";
        // }
        cout << y << '\n';
    }

    return 0;
}