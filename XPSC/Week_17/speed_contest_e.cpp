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
        int n, q;
        cin >> n >> q;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < q; i++)
        {
            int res = 0;
            int current_min = INT_MAX;
            int idx, val;
            cin >> idx >> val;
            v[idx] = val;
            int j;
            for (j = 1; j <= n; j++)
            {
                if (j == 1)
                {
                    res += min(v[j], v[j + 1]);
                    current_min = min(v[j], v[j + 1]);
                    j++;
                }
                else
                {

                    res += min(current_min, v[j]);
                    current_min = min(current_min, v[j]);
                }
            }

            cout << res << endl;
        }
    }

    return 0;
}