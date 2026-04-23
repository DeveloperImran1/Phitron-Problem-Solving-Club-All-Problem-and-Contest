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
        vector<vector<int>> v(n + 1);
        vector<int> freq(n * 2 + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            vector<int> sub_v(n + 1);
            for (int j = 1; j <= n; j++)
            {
                int val;
                cin >> val;
                sub_v[j] = val;
                freq[val] = 1;
            }
            v[i] = sub_v;
        }

        int missing = 1;
        for (int i = 1; i < n * 2 + 1; i++)
        {
            if (freq[i] == 0)
            {
                missing = i;
                break;
            }
        }
        vector<int> res(n * 2 + 1);
        res[1] = missing;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                res[i + j] = v[i][j];
            }
        }

        for (int i = 1; i <= n * 2; i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }

    return 0;
}