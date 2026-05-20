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
        // for (int i = 1; i < n; i++)
        // {
        //     for (int j = i + 1; j <= n; j++)
        //     {
        //         int gcd = __gcd(i, j);
        //         v.push_back(gcd);
        //         // cout << i << " " << j << " -> " << gcd << endl;
        //     }
        // }
        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout << v[i] << " ";
        // }

        if (n % 2 == 0)
        {
            cout << n / 2 << endl;
        }
        else
        {

            cout << (n - 1) / 2 << endl;
        }
    }

    return 0;
}