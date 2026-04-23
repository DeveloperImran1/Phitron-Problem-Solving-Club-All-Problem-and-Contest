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

        long long int res = v[n - 2];
        for (int i = n - 3; i >= 0; i--)
        {
            res -= v[i];
        }
        cout << v[n - 1] - res << endl;
    }

    return 0;
}