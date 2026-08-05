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
        vector<int> v;
        for (int i = 1, j = n * n; i <= j; i++, j--)
        {
            if (i == j)
            {
                v.push_back(i);
            }
            else
            {
                v.push_back(i);
                v.push_back(j);
            }
        }

        int idx = 0;
        for (int i = 1; i <= n; i++)
        {
            vector<int> res;
            for (int j = 0; j < n; j++)
            {
                res.push_back(v[idx]);
                idx++;
            }

            if (i % 2 == 0)
            {
                for (int j = n - 1; j >= 0; j--)
                {
                    cout << res[j] << " ";
                }
                cout << endl;
            }
            else
            {
                for (int j = 0; j < n; j++)
                {
                    cout << res[j] << " ";
                }
                cout << endl;
            }
        }
    }

    return 0;
}