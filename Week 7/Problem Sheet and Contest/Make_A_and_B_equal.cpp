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
        if (n == k)
        {
            cout << "YES" << endl;
            continue;
        }

        if (k > n)
        {
            int posible = 0;
            for (int i = n; i <= k;)
            {
                i = (i * 2);
                if (i == k)
                {
                    posible = 1;
                }
            }

            if (posible)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            int posible = 0;
            for (int i = k; i <= n;)
            {
                i = (i * 2);
                if (i == n)
                {
                    posible = 1;
                }
            }

            if (posible)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}