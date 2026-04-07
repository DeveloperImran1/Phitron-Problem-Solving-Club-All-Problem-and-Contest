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
//         int n, k;
//         cin >> n >> k;
//         vector<int> v(n);

//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }

//         vector<int> l_v, r_v;
//         for (int i = 0, j = n - 1; i < n; i++, j--)
//         {
//             if (v[i])
//             {
//                 l_v.push_back(i + 1);
//             }
//             if (v[j])
//             {
//                 r_v.push_back(i + 1);
//             }
//         }

//         // for (int i = 0; i < r_v.size(); i++)
//         // {
//         //     cout << l_v[i] << " ";
//         // }
//         // cout << '\n';
//         // for (int i = 0; i < r_v.size(); i++)
//         // {
//         //     cout << r_v[i] << " ";
//         // }

//         int total_one = l_v.size();

//         int ans = 0;
//         for (int i = 0, j = 0; i < n;)
//         {
//             if (total_one < k)
//             {
//                 ans = -1;
//                 break;
//             }

//             if (total_one == k)
//             {
//                 if (i && j)
//                 {
//                     ans = l_v[i - 1] + r_v[j - 1];
//                 }
//                 else if (i && !j)
//                 {
//                     ans = l_v[i - 1];
//                 }
//                 else if (!i && j)
//                 {
//                     ans = r_v[j - 1];
//                 }

//                 break;
//             }

//             if (l_v[i] < r_v[j])
//             {
//                 i++;
//                 total_one--;
//             }
//             else if (l_v[i] > r_v[j])
//             {
//                 j++;
//                 total_one--;
//             }else{

//             }
//         }
//         cout << ans << '\n';
//         // cout << '\n';
//     }

//     return 0;
// }

// ---------------->

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        // queue<int> q;
        // for (int i = 0, j = n - 1; i < n; i++, j--)
        // {
        //     if (v[i])
        //     {
        //         q.push(i + 1);
        //     }
        //     if (v[j])
        //     {
        //         q.push(i + 1);
        //     }
        // }

        // int total_one = q.size();
        int ans = -1;
        int count = 0;
        int l = n / 2, r = n / 2;
        count += v[l];
        while (1)
        {
            if (count == k)
            {
                if (ans == -1)
                {
                    ans = l + 1;
                }
                else
                {
                    ans = min(ans, l + 1);
                }
            }

            if (l == 0 && r == n - 1)
            {
                break;
            }

            if (l != 0)
            {
                l--;
                count += v[l];
            }

            if (count == k)
            {
                if (ans == -1)
                {
                    ans = l + 1;
                }
                else
                {
                    ans = min(ans, l + 1);
                }
            }

            if (r != n - 1)
            {
                r++;
                count += v[r];
            }
            if (count == k)
            {
                if (ans == -1)
                {
                    ans = n - (r + 1);
                }
                else
                {
                    ans = min(ans, n - (r + 1));
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}