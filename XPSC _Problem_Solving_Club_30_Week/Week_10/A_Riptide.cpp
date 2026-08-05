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
        vector<int> v(3);
        cin >> v[0];
        cin >> v[1];
        cin >> v[2];
        sort(v.begin(), v.end());
        int count = 0;
        if (v[0] == v[1])
        {
            cout << count << endl;
            continue;
        }
        else if (v[0] == v[2])
        {
            cout << count << endl;
            continue;
        }
        else if (v[1] == v[2])
        {
            cout << count << endl;
            continue;
        }

        int a = v[2] - v[1];
        int b = v[1] - v[0];
        int mn = min(a, b);

        // cout << v[0] << " " << v[1] << " " << v[2] << endl;
        cout << mn << endl;
    }

    return 0;
}