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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int sum = 0, mn = 0, mx = 0;

        for (int i = 0; i < n; i++)
        {
            sum += v[i];
            mx = max(mx, sum);
            mn = min(mn, sum);
        }

        if (mx - mn <= k)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}