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
        int mx = INT_MIN;
        for (int i = 0; i < 4; i++)
        {
            cin >> v[i];
            mx = max(v[i], mx);
        }
        cout << mx << endl;
    }

    return 0;
}