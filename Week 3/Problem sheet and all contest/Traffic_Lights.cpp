#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, n;
    cin >> x >> n;
    set<int> lights;
    multiset<int> gaps;
    lights.insert(0);
    lights.insert(x);
    gaps.insert(x);

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        auto it = lights.upper_bound(val);
        int r = *it;
        it--;
        int l = *it;

        gaps.erase(gaps.find(r - l));

        gaps.insert(val - l);
        gaps.insert(r - val);

        lights.insert(val);

        cout << *gaps.rbegin() << " ";
    }

    return 0;
}