// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n, k;
//     cin >> n >> k;
//     vector<int> a(n);
//     vector<long long int> b(n);
//     for (int i = 0; i < n; i++)
//     {
//         int val;
//         cin >> val;
//         a[i] = val;
//         if (i == 0)
//         {
//             b[i] = val;
//         }
//         else
//         {
//             long long int value = val;
//             b[i] = b[i - 1] + value;
//         }
//     }

//     map<pair<long long int, int>, int> mp;
//     for (int i = 0; i < n; i++)
//     {
//         pair<long long int, int> p = {b[i], i};
//         mp[p] = 1;
//     }

//     // for (auto it : mp)
//     // {
//     //     long long int key = it.first.first;
//     //     int idx = it.first.second;
//     //     int total = it.second;
//     //     cout << key << " " << idx << " " << total << endl;
//     // }

//     int r = n - 1;
//     long long int res = 0;
//     while (r >= 0)
//     {
//         long long int target = b[r] - k;

//         if (target == 0)
//         {
//             res++;
//         }
//         else
//         {
//             auto it = mp.lower_bound({target, -1});
//             if (it != mp.end() && it->first.first == target && it->first.second != r)
//             {
//                 // cout << target << " " << it->first.first << " " << it->first.second << endl;
//                 res++;
//             }
//         }
//         r--;
//     }

//     cout << res << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<long long int> pre(n + 1);
    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + a[i - 1];
    }

    long long int cnt = 0;
    map<long long int, long long int> mp;
    mp[0] = 1;
    for (int r = 1; r <= n; r++)
    {
        long long int y = pre[r] - k;
        cnt += mp[y];
        mp[pre[r]]++;
    }

    cout << cnt << endl;
    return 0;
}