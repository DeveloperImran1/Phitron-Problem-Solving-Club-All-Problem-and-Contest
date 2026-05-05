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
            int val;
            cin >> val;
            v[i] = val;
        }

        int total_buy = 0;
        int total_sell = 0;
        sort(v.begin(), v.end(), greater<int>());
        for (int i = 0; i < k; i++)
        {
            if (v[i] > 5)
            {
                total_sell += v[i];
                total_buy += 5;
            }
        }
        for (int i = k; i < n; i++)
        {
            if (v[i] > 10)
            {
                total_sell += v[i];
                total_buy += 10;
            }
        }

        cout << total_sell - total_buy << endl;
    }

    return 0;
}