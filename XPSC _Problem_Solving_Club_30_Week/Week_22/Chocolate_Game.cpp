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
        int count = 0;
        int total_odd_choclet_box = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            count += v[i];
            if (v[i] % 2 == 1)
            {
                total_odd_choclet_box++;
            }
        }

        if (count % 2 == 0)
        {
            int res = (count - total_odd_choclet_box) + (total_odd_choclet_box / 2);
            cout << res << endl;
        }
        else
        {
            cout << total_odd_choclet_box / 2 << endl;
        }
    }

    return 0;
}