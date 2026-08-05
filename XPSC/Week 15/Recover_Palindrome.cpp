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
        int l = 0, r = n - 1;
        int is_false = 1;
        while (l <= r)
        {
            if ((s[l] == s[r] && s[l] != '?' && s[r] != '?') || (s[l] == '?' && s[r] != '?') || (s[l] != '?' && s[r] == '?'))
            {
            }
            else
            {
                is_false = 0;
                break;
            }
            l++, r--;
        }

        if (is_false)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}