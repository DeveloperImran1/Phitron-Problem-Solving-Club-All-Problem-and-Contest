#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    multiset<pair<int, int>> ml;
    for (int i = 0; i < n; i++)
    {
        ml.insert({v[i], i});
    }

    int is_done = 0;

    // for (auto [key, val] : ml)
    // {
    //     cout << key << " " << val << endl;
    // }
    // cout << endl;

    auto l_elem = ml.begin();
    for (int i = 0; i < n - 2; i++)
    {
        if (i != 0)
        {
            l_elem++;
        }
        long long int need = x - l_elem->first;
        auto l = l_elem;
        l++;
        auto r = ml.rbegin();
        // cout << l_elem->first << " " << l->first << " " << r->first << endl;

        int count = 1;
        while (l->first <= r->first && l->second != r->second && l != ml.end())
        {
            count++;
            if (l->first + r->first == need)
            {

                cout << l->second + 1 << " " << r->second + 1 << " " << l_elem->second + 1 << endl;
                is_done = 1;
                break;
            }
            if (l->first + r->first < need)
            {
                l++;
            }
            else if (l->first + r->first > need)
            {
                r++;
            }
        }

        if (is_done)
        {
            break;
        }
    }

    if (!is_done)
    {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}