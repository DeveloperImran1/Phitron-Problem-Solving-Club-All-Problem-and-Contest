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
        int total_one = 0, total_zero = 0, last_one_idx = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                total_one++;
                last_one_idx = i;
            }
        }
        for (int i = 0; i <= last_one_idx; i++)
        {
            if (s[i] == '0')
            {
                total_zero++;
            }
        }

        total_one += min(k, total_zero);

        cout << total_one << endl;
    }

    return 0;
}