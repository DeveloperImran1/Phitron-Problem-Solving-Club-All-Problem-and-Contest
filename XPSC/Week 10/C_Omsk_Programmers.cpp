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
//         int a, b, x;
//         cin >> a >> b >> x;
//         if (a == b)
//         {
//             cout << 0 << endl;
//             continue;
//         }

//         int mx = max(a, b);
//         int mn = min(a, b);
//         int copy_mx = mx;
//         int copy_mn = mn;

//         int ans_1 = mx - mn;

//         int ans_2 = INT_MAX;
//         int count_1 = 0;
//         while (1)
//         {

//             if (mx >= mn)
//             {
//                 ans_2 = min((mx - mn + count_1), ans_2);
//             }

//             mx = mx / x;
//             count_1++;
//             if (mx < mn)
//             {
//                 break;
//             }
//         }

//         mx = copy_mx;
//         mn = copy_mn;

//         int ans_3 = INT_MAX;
//         int count_2 = 0;
//         while (1)
//         {

//             if (mx >= mn)
//             {
//                 ans_3 = min((mx - mn + count_2), ans_3);
//             }
//             else
//             {
//                 ans_3 = min((mn - mx + count_2), ans_3);
//             }

//             if (mx < mn)
//             {
//                 break;
//             }
//             mx = mx / x;
//             count_2++;
//         }

//         int ans_4 = ans_3;
//         while ((mx != 0 && mn != 0) || mx != mn)
//         {
//             if (mx != 0 && mn != 0)
//             {
//                 mx = mx / x;
//                 mn = mn / x;
//                 ans_4 += 2;
//             }
//             else if (mx != 0)
//             {
//                 mx = mx / x;
//                 ans_4++;
//             }
//             else if (mn != 0)
//             {
//                 mn = mn / x;
//                 ans_4++;
//             }
//             else if (mx == mn)
//             {
//                 break;
//             }
//         }

//         vector<int> ans;
//         ans.push_back(ans_1);
//         ans.push_back(ans_2);
//         ans.push_back(ans_3);
//         ans.push_back(ans_4);
//         sort(ans.begin(), ans.end());
//         cout << ans[0] << endl;
//     }

//     return 0;
// }

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
        int a, b, x;
        cin >> a >> b >> x;
        vector<int> v1, v2;
        int copy_a = a;
        int copy_b = b;

        while (1)
        {
            v1.push_back(copy_a);
            if (copy_a == 0)
            {
                break;
            }
            copy_a = copy_a / x;
        }
        while (1)
        {
            v2.push_back(copy_b);
            if (copy_b == 0)
            {
                break;
            }
            copy_b = copy_b / x;
        }

        int ans = INT_MAX;

        for (int i = 0; i < v1.size(); i++)
        {
            for (int j = 0; j < v2.size(); j++)
            {
                int mn = min(v1[i], v2[j]);
                int mx = max(v1[i], v2[j]);
                ans = min(ans, (mx - mn + i + j));
            }
        }
        cout << ans << endl;
    }

    return 0;
}