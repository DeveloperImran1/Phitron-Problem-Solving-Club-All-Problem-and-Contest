#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    multiset<int> mls;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        mls.insert(val);
    }
    int total_day = 0;
    int i = 1;
    for (auto it : mls)
    {
        if (it >= i)
        {
            total_day++;
            i++;
        }
    }
    cout << total_day;

    return 0;
}