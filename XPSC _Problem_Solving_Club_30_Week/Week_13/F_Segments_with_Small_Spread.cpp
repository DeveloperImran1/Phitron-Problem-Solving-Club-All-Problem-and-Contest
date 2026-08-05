#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long int k;
    cin >> n >> k;

    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int l = 0, r = 0;
    long long int ans = 0;
    multiset<long long int> ml;
    while (r < n)
    {
        ml.insert(v[r]);
        auto it1 = ml.begin();
        auto it2 = --ml.end();
        long long int mn = *it1;
        long long int mx = *it2;
        if (mx - mn <= k)
        {
            ans += r - l + 1;
        }
        else
        {
            while (l <= r)
            {
                auto it1 = ml.begin();
                auto it2 = --ml.end();
                long long int mn = *it1;
                long long int mx = *it2;

                if (mx - mn <= k)
                {
                    ans += r - l + 1;
                    break;
                }

                auto it = ml.find(v[l]);
                ml.erase(it);
                l++;
            }
        }
        r++;
    }

    cout << ans << endl;

    return 0;
}