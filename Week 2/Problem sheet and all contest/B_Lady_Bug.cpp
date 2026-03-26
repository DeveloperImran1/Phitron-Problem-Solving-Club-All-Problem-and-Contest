

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
        string a, b;
        cin >> a >> b;

        int total_zero_in_a = 0;
        int total_zero_in_b = 0;

        // for a
        for (int i = 0; i < n; i += 2)
        {
            if (a[i] == '0')
            {
                total_zero_in_a++;
            }
        }
        for (int i = 1; i < n; i += 2)
        {
            if (b[i] == '0')
            {
                total_zero_in_a++;
            }
        }

        // for b
        for (int i = 0; i < n; i += 2)
        {
            if (b[i] == '0')
            {
                total_zero_in_b++;
            }
        }
        for (int i = 1; i < n; i += 2)
        {
            if (a[i] == '0')
            {
                total_zero_in_b++;
            }
        }

                if (total_zero_in_a < ((n + 1) / 2))
        {
            cout << "NO" << endl;
        }
        else if (total_zero_in_b < (n / 2))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}