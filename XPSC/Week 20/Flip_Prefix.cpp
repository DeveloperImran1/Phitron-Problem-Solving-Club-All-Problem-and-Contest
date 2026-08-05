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
        string s;
        cin >> s;

        int ans = 0;
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                ans = ans + 1;
            }
            else if (s[i] == '0')
            {
                ans = ans - 1;
            }

            if (ans == 0)
            {
                k++;
            }
        }

        int res = pow(2, k);

        cout << res << endl;
    }

    return 0;
}