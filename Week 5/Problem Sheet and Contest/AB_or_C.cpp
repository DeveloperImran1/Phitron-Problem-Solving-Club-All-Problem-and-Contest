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
        multiset<int> s;
        for (int i = 0; i < 3 * n; i++)
        {
            int val;
            cin >> val;
            s.insert(val);
        }

        auto first = s.begin();
        auto last = s.begin();
        for (int i = 0; i <= n; i++)
        {
            last++;
        }

        for (auto it = s.begin(); it != s.end(); it++)
        {
            cout << *it << " ";
        }
        // cout << *first << " " << *last << endl;
        cout << endl;
    }

    return 0;
}