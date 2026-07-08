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
        vector<int> res;
        for (int i = 0; i < n - 1; i++)
        {
            res.push_back(max(v[i], v[i + 1]));
        }

        sort(res.begin(), res.end());
        cout << res[0] - 1 << endl;
    }

    return 0;
}