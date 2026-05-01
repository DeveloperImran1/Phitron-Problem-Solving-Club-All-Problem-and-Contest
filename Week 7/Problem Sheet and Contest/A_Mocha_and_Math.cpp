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
        vector<int> v(n + 1);

        int res;
        ;
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            if (i == 1)
            {
                res = v[i];
            }
            res = res & v[i];
        }

        cout << res << endl;
    }

    return 0;
}