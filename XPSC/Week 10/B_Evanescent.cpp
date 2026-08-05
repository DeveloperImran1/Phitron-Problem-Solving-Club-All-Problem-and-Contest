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

        int res = 1;
        char current_c = s[0];
        for (int i = 1; i < n; i++)
        {
            if (s[i] != current_c)
            {
                res++;
                current_c = s[i];
            }
        }
        int minus = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (s[i - 1] == s[i + 1] && s[i - 1] != s[i])
            {
                minus = 2;
                break;
            }
            else if (s[i] != s[i - 1] && s[i] != s[i + 1])
            {
                minus = 1;
            }
        }
        cout << res - minus << endl;
    }

    return 0;
}