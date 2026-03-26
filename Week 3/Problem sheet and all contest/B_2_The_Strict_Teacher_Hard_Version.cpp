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
        int n, m, q;
        cin >> n >> m >> q;
        vector<int> b(m);
        for (auto &u : b)
        {
            cin >> u;
        }
        sort(b.begin(), b.end());
        while (q--)
        {
            int a;
            cin >> a;
            auto it = upper_bound(b.begin(), b.end(), a);
            if (it == b.end())
            {
                it--;
                cout << n - *it << endl;
            }
            else if (it == b.begin())
            {
                cout << *it - 1 << endl;
            }
            else
            {
                int porer_teacher = *it;
                it--;
                int ager_teacher = *it;
                int len = porer_teacher - ager_teacher - 1;
                cout << (len + 1) / 2 << endl;
            }
        }
    }

    return 0;
}