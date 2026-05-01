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
        int n, x, m;
        cin >> n >> x >> m;
        vector<int> v;
        v.push_back(0);
        for (int i = 0; i < n; i++)
        {
            int val1, val2;
            cin >> val1 >> val2;
            v.push_back(val1);
            v.push_back(val2);
        }
        v.push_back(m);

        string res = "NO";

        for (int i = 0, j = 1; j < v.size();)
        {
            int diference = v[j] - v[i];
            if (diference >= x)
            {
                res = "YES";
                break;
            }
            i = j + 1;
            j = i + 1;
        }
        cout << res << endl;
    }

    return 0;
}