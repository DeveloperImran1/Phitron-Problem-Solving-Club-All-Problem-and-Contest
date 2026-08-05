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

        vector<bool> is_posible(n, false);
        for (int i = 1; i < n - 1; i++)
        {
            if (v[i] < v[i - 1] && v[i] < v[i + 1])
            {
                is_posible[i] = true;
            }
        }

        int res = 0;

        for (int i = 0; i < n; i++)
        {
            int final_result = v[i];

            if (i > 0 && is_posible[i - 1])
            {
                final_result = min(final_result, v[i - 1]);
            }

            if (i < n - 1 && is_posible[i + 1])
            {
                final_result = min(final_result, v[i + 1]);
            }

            res += final_result;
        }

        cout << res << endl;
    }

    return 0;
}