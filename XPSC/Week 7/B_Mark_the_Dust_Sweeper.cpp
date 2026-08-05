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
        int is_good = 1;
        long long int total_sum_without_n = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] > 0 && i != n - 1)
            {
                total_sum_without_n += v[i];
                is_good = 0;
            }

            if (is_good == 0 && v[i] == 0 && i != n - 1)
            {
                total_sum_without_n++;
            }
        }
        if (is_good)
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            cout << total_sum_without_n << endl;
        }
    }

    return 0;
}