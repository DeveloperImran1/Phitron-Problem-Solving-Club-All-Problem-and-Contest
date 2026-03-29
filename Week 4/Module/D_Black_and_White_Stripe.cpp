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
        int l = 0, r = 0, res = INT_MAX;
        queue<int> q;
        while (r < n)
        {
            if (s[r] == 'W')
            {
                q.push(s[r]);
            }

            if (r - l + 1 == k)
            {
                int q_size = q.size();
                res = min(res, q_size);
                if (!q.empty())
                {
                    if (s[l] == q.front())
                    {
                        q.pop();
                    }
                }
                l++, r++;
            }
            else
            {
                r++;
            }
        }

        cout << res << endl;
    }

    return 0;
}