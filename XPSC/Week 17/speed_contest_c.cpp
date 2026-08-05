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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int mn = INT_MAX;
        for (int i = 0, j = 1; j < n; i++, j++)
        {
            int first = v[i];
            int second = v[j] / 2;
            int total = first + second;
            mn = min(mn, total);
        }

        sort(v.begin(), v.end());
        mn = min(mn, (v[0] + v[1]));
        cout << mn << endl;
    }

    return 0;
}