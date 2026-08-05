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
        int x, y, z;
        cin >> x >> y >> z;
        vector<int> v;
        v.push_back(x);
        v.push_back(y);
        v.push_back(z);
        sort(v.begin(), v.end());
        int small_2 = v[0] + v[1];
        if (small_2 < v[2])
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}