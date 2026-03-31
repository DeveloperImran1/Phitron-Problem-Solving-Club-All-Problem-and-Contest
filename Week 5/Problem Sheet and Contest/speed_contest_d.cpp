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
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        int mx = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                count++;
                mx = max(mx, count);
            }
            else
            {
                if (s[i] == s[i - 1])
                {
                    count++;
                    mx = max(mx, count);
                }
                else
                {
                    count = 1;
                    mx = max(mx, count);
                }
            }
        }

        char last_char = s[n - 1];
        int last_char_count = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (last_char == s[i])
            {
                last_char_count++;
            }
            else
            {
                break;
            }
        }
        // cout << last_char << " " << last_char_count << endl;

        cout << mx << " ";
        for (int i = 0; i < q; i++)
        {
            char val;
            cin >> val;

            if (last_char == val)
            {
                last_char_count++;
                mx = max(mx, last_char_count);
            }
            else
            {
                s.push_back(val);
                last_char = val;
                last_char_count = 1;
                mx = max(mx, last_char_count);
            }
            cout << mx << " ";
        }
        cout << endl;
    }

    return 0;
}