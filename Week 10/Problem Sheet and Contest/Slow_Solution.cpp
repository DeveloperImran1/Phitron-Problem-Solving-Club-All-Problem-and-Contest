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
        int t, n, s;
        cin >> t >> n >> s;
        if (s % n != 0)
        {
            int sum = 0;
            int mn = s / n;
            if (t <= mn)
            {
                mn = min(mn, t);
                while (mn--)
                {
                    sum += (n * n);
                }
            }
            else
            {
                mn = min(mn, t);
                while (mn--)
                {
                    sum += (n * n);
                }
                sum += (s % n) * (s % n);
            }

            cout << sum << endl;
        }
        else
        {
            int mn = s / n;
            mn = min(mn, t);
            int sum = 0;
            while (mn--)
            {
                sum += (n * n);
            }
            cout << sum << endl;
        }
    }

    return 0;
}