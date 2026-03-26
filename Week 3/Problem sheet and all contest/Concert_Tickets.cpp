#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    multiset<int> mls;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        mls.insert(val);
    }

    while (m--)
    {
        int mx_price;
        cin >> mx_price;
        auto it = mls.lower_bound(mx_price);

        if (it == mls.end() || *it != mx_price)
        {
            if (it == mls.begin())
            {
                cout << -1 << endl;
                continue;
            }
            else
            {
                it--;
            }
        }

        cout << *it << endl;
        mls.erase(it);
    }

    return 0;
}