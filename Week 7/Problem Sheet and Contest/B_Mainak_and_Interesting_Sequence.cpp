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
        if ((n > k))
        {
            cout << "No" << endl;
            continue;
        }

        if (n % 2 == 1)
        {
            cout << "Yes" << endl;
            for (int i = 0; i < n - 1; i++)
            {
                cout << 1 << " ";
            }
            cout << k - (n - 1) << endl;
            continue;
        }
        else if (n % 2 == 0)
        {
            if (k % 2 == 1)
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
                for (int i = 0; i < n - 2; i++)
                {
                    cout << 1 << " ";
                }
                int extra = k - (n - 2);
                cout << extra / 2 << " " << extra / 2 << endl;
            }
        }
    }

    return 0;
}