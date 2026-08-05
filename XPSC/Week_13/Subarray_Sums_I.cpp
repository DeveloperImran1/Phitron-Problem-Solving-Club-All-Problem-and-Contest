#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<long long int> b(n);
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        a[i] = val;
        if (i == 0)
        {
            b[i] = val;
        }
        else
        {
            long long int value = val;
            b[i] = b[i - 1] + value;
        }
    }

    map<long long int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[b[i]] = 1;
    }

    // for (auto [key, val] : mp)
    // {
    //     cout << key << " " << val << endl;
    // }

    int r = n - 1;
    long long int res = 0;
    while (r >= 0)
    {
        long long int target = b[r] - k;

        if (target == 0)
        {
            res++;
        }
        else if (target > 0)
        {
            if (mp.count(target))
            {
                res++;
            }
        }
        r--;
    }

    cout << res << endl;
    return 0;
}