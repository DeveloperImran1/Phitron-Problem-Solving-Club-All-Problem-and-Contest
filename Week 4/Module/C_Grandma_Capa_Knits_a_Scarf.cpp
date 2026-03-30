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
        int mn = 2e5;
        for (char c = 'a'; c <= 'z'; c++)
        {
            int i = 0, j = n - 1, count = 0;
            int is_palindrome = 1;
            while (i < j)
            {
                if (s[i] == s[j])
                {
                    i++, j--;
                }
                else if (s[i] == c)
                {
                    i++;
                    count++;
                }
                else if (s[j] == c)
                {
                    j--;
                    count++;
                }
                else if (s[i] != s[j])
                {
                    is_palindrome = 0;
                    break;
                }
            }

            if (is_palindrome)
            {
                mn = min(mn, count);
            }
        }

        if (mn == (int)2e5)
        {
            mn = -1;
        }

        cout << mn << endl;
    }

    return 0;
}