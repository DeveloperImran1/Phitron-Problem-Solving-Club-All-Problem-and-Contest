// Brute force ----------------->

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long int n, p, k;
//         cin >> n >> p >> k;
//         multiset<long long int, greater<long long int>> ml;
//         for (int i = 0; i < n; i++)
//         {
//             long long int val;
//             cin >> val;
//             ml.insert(val);
//         }

//         long long int ans = 0;
//         while (p >= k + 1)
//         {
//             auto current_total = ml.begin();
//             if (*current_total >= k)
//             {
//                 ans += k;
//                 long long int available = *current_total - k;
//                 ml.erase(current_total);
//                 ml.insert(available);
//                 p -= (k + 1);
//             }
//             else if (*current_total < k && *current_total != 0)
//             {
//                 ans += *current_total;
//                 p -= (*current_total + 1);
//                 ml.erase(current_total);
//                 ml.insert(0);
//             }
//             else
//             {
//                 break;
//             }
//         }

//         while (p < k + 1)
//         {
//             auto current_total = ml.begin();
//             if (*current_total >= p)
//             {
//                 ans += p;
//                 p = 0;
//                 long long int available = *current_total - p;
//                 ml.erase(current_total);
//                 ml.insert(available);
//                 break;
//             }
//             else
//             {
//                 p -= *current_total + 1;
//                 ans += *current_total;
//                 ml.erase(current_total);
//                 ml.insert(0);
//             }
//         }

//         // for (auto val : ml)
//         // {
//         //     cout << val << " ";
//         // }
//         cout << ans << endl;
//     }
//     return 0;
// }

// Optimise way ---------------------->
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t;
    cin >> t;
    while (t--)
    {
        // Full segment er flower bosabo.
        // Baki flower boro theke soto sort korbo
        // baki gulo bosabo

        long long int n, pot, k;
        cin >> n >> pot >> k;
        vector<long long int> a(n);
        for (long long int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // 1. Full segment er flower bosabo.
        long long int ans = 0;
        for (auto &flower : a)
        {
            if (pot <= 0)
            {
                break;
            }

            long long int mn = min(flower, pot);
            if (mn <= k)
            {
                continue;
            }

            long long int full_segment_flower = flower / k;
            long long int full_segment_pots = pot / (k + 1);
            long long int full_segment = min(full_segment_flower, full_segment_pots);

            long long int flower_used = full_segment * k;
            long long int pot_used = full_segment * (k + 1);

            ans += flower_used;
            flower -= flower_used;
            pot -= pot_used;
        }

        // 2. Baki flower sort korbo descending order a
        sort(a.rbegin(), a.rend());

        // 3. Baki flower gulo bosabo
        for (auto flower : a)
        {
            if (pot <= 0)
            {
                break;
            }

            long long int mn = min(pot, flower);
            if (flower <= pot)
            {
                ans += flower;
                pot -= flower;
                pot -= 1;
            }
            else
            {
                ans += pot;
                pot = 0;
            }
        }

        cout << ans << endl;
    }
    return 0;
}