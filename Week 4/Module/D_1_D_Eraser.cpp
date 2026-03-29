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
        string s;
        cin >> s;
        int l = 0, r = 0, count = 0;
        set<char> b;
        while (r < n)
        {
            if (s[r] == 'B')
            {
                b.insert('B');
            }

            if (r - l + 1 == k)
            {
                if (!b.empty() && s[l] == 'B')
                {
                    count++;
                    b.clear();
                    r++;
                    l = r;
                }
                else
                {
                    l++, r++;
                }
            }
            else
            {
                r++;
            }
        }

        if (!b.empty())
        {
            count++;
        }

        cout << count << endl;
    }

    return 0;
}