

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v[i] = val;
    }

    multiset<pair<int, int>> ml;
    for (int i = 0; i < n; i++)
    {
        pair<int, int> p = {v[i], i + 1};
        ml.insert(p);
    }

    auto l = ml.begin();
    auto r = --ml.end();

    while (l->first <= r->first && l->second != r->second)
    {
        int l_val = l->first;
        int r_val = r->first;

        if (l_val + r_val == k)
        {
            cout << r->second << " " << l->second << endl;
            return 0;
        }

        if (l_val + r_val < k)
        {
            l++;
        }
        else if (l_val + r_val > k)
        {
            r--;
        }
        // cout << l->first << " " << r->first << endl;
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}