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
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }

        int prev_top = 1;
        int res = 0;
        for (int i = 2; i <= n; i++)
        {
            int balence = (v[i] - i) + prev_top;
            res = max(res, balence);
            prev_top = max(prev_top, balence + i);
        }

        cout << res << endl;
    }

    return 0;
}