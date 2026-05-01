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
        string s1;
        cin >> s1;

        vector<char> s(n + 1);
        for (int i = 1; i <= n; i++)
        {
            s[i] = s1[i - 1];
        }

        int l = 1, r = 1, mx = 0;
        int count = 0;
        while (r <= n)
        {
            int r1 = r - l + 1;
            // cout << r1;
            if ((r1 % 2 == 0 && s[r] == 'w') || (r1 % 2 == 1 && (s[r] == 'u' || s[r] == 'o')))
            {
                if (count == 0 && s[r] == 'w')
                {

                    l = r;
                }
                else
                {
                    count++;
                }
                r++;
                if (count % 2 == 1)
                {
                    mx = max(mx, count);
                }
            }
            else
            {
                if (count % 2 == 1)
                {
                    mx = max(mx, count);
                }
                count = 0;
                if (l == r)
                {
                    r++;
                }
                l = r;
            }
        }
        cout << mx << endl;
        // cout << endl;
    }

    return 0;
}