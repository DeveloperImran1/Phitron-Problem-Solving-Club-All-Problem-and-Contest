#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    multiset<pair<int, int>> ml;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v[i] = val;
        pair<int, int> p = {val, i + 1};
        ml.insert(p);
    }

    auto l = ml.begin();
    auto last = ml.end();
    last--;
    last--;

    while (l->first <= last->first && l->second != last->second)
    {
        auto mid = l;
        mid++;
        auto r = --ml.end();
        int target = k - l->first;
        while (mid->first <= r->first && mid->second != r->second)
        {
            if (mid->first + r->first == target)
            {
                cout << mid->second << " " << r->second << " " << l->second << endl;
                return 0;
            }
            if (mid->first + r->first > target)
            {
                r--;
            }
            else if (mid->first + r->first < target)
            {
                mid++;
            }

            // cout << l->first << " " << mid->first << " " << r->first << endl;
            // mid++, r--;
        }
        l++;
    }
    cout << "IMPOSSIBLE" << endl;

    return 0;
}