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
        long long int l, r;
        cin >> l >> r;
        int is_exist = 0;
        for (int i = l; i <= r; i++)
        {
            vector<int> v;
            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    cout << (j - 1) * (i / j) << " " << i / j << endl;
                    is_exist = 1;
                    break;
                             }
            }
            if (is_exist)
            {
                break;
            }
        }
        if (!is_exist)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}