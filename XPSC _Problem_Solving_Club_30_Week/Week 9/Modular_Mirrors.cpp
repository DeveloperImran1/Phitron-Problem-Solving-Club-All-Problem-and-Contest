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
        int n, mod;
        cin >> n >> mod;
        vector<int> v;
        v.push_back(0);
        v.push_back(1);
        for (int i = 2; i <= n; i++)
        {
            int val = v[i - 1] - v[i - 2];
            if (val < 0)
            {
                val += mod;
            }
            v.push_back(val);
        }
        v.push_back(0);

        if (v[n] != v[n - 1])
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}