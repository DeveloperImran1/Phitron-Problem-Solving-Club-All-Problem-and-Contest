#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n;
    cin >> n;
    vector<long long int> v(n);
    for (long long int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<long long int> pre(n + 1);
    for (long long int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + v[i - 1];
    }

    vector<long long int> modulo(n + 1);
    for (long long int i = 1; i <= n; i++)
    {
        modulo[i] = ((pre[i] % n) + n) % n;
    }

    map<long long int, long long int> mp;
    for (long long int i = 0; i <= n; i++)
    {
        mp[modulo[i]]++;
    }

    long long int count = 0;
    for (auto [key, val] : mp)
    {
        if (val >= 2)
        {
            count += (val * (val - 1)) / 2;
        }
    }
    cout << count << endl;

    // for (long long int i = 0; i < n; i++)
    // {
    //     cout << modulo[i] << " ";
    // }
    // cout << endl;

    // long long int count = 0;
    // long long int subarr_pre_divisible = 1;
    // for (long long int i = 0; i < n; i++)
    // {
    //     if (pre[i] % n == 0)
    //     {
    //         count += subarr_pre_divisible;
    //         subarr_pre_divisible++;
    //         continue;
    //     }
    //     // else if (pre[i] < n)
    //     // {
    //     //     subarr_pre_divisible = 1;
    //     //     continue;
    //     // }

    //     long long int extra = ((pre[i] % n) + n) % n;
    //     cout << extra << " ";
    //     auto end_it = modulo.begin() + (i - 1);
    //     auto it = find(modulo.begin(), end_it, extra);
    //     if (it != end_it)
    //     {
    //         count += subarr_pre_divisible;
    //         subarr_pre_divisible++;
    //     }
    //     else
    //     {
    //         subarr_pre_divisible = 1;
    //     }
    // }
    // cout << endl;
    // cout << count << endl;

    return 0;
}