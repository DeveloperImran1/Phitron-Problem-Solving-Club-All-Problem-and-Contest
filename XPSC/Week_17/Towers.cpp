#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    multiset<int> towers;
    for (int i = 0; i < n; i++)
    {
        int current = v[i];
        auto it = towers.upper_bound(current);
        if (it == towers.end())
        {
            towers.insert(current);
        }
        else
        {
            towers.erase(it);
            towers.insert(current);
        }

        // for (auto val : towers)
        // {
        //     cout << val << " ";
        // }
        // cout << endl;
    }

    // for (auto it : towers)
    // {
    //     cout << it << " ";
    // }

    cout << towers.size();

    return 0;
}