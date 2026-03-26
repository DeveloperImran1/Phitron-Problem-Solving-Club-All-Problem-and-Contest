#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    set<pair<int, int>> s;
    multiset<pair<int, int>> mls;

    vector<int> ans;
    for (int i = 1, j = 1; i <= n; i++)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int money;
            cin >> money;
            s.insert({j, money});
            mls.insert({money, -j});
            j++;
        }
        else if (type == 2)
        {
            int pos = s.begin()->first;
            int money = s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            mls.erase({money, -pos});
        }
        else
        {
            int pos = -mls.rbegin()->second;
            int money = mls.rbegin()->first;
            ans.push_back(pos);
            mls.erase(--mls.end());
            s.erase({pos, money});
        }
    }

    for (auto val : ans)
    {
        cout << val << " ";
    }

    return 0;
}