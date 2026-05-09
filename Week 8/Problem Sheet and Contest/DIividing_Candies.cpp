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
        int n, x;
        cin >> n >> x;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (val % x == 0)
            {
                v.push_back(val);
            }
        }

        if (v.size() == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            sort(v.begin(), v.end(), greater<int>());
            cout << v[0] << endl;
        }
    }

    return 0;
}