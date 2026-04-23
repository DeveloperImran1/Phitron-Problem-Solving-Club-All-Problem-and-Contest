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
        vector<pair<int, int>> v(n);
        int zero = 0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v[i] = {val, i + 1};
            if (val == 0)
            {
                zero++;
            }
        }

        if (zero == n)
        {
            cout << -1 << endl;
            continue;
        }
        sort(v.begin(), v.end());
        cout << v[n - 1].second << " " << v[n - 2].second << " " << v[0].second << endl;
    }

    return 0;
}