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
//         int n;
//         cin >> n;
//         vector<int> v;
//         for (int i = 0; i < n; i++)
//         {
//             int val;
//             cin >> val;
//             v.push_back(val);
//         }

//         // int ans = 3 & 3;
//         // cout << ans << endl;

//         if (n == 1)
//         {
//             cout << "Yes" << endl;
//             continue;
//         }

//         int is_posible = 0;

//         for (auto i = v.begin(); i != v.end() - 1;)
//         {
//             is_posible = 0;
//             for (auto j = i + 1; j != v.end(); j++)
//             {
//                 int ans = *i & *j;
//                 if (ans == 0)
//                 {
//                     v.push_back(*i + *j);
//                     v.erase(i);
//                     v.erase(j);
//                     i = v.begin();
//                     is_posible = 1;
//                     break;
//                 }
//             }
//             if (is_posible == 0)
//             {
//                 break;
//             }
//         }

//         // cout << v.size() << endl;

//         if (is_posible == 1)
//         {
//             cout << "Yes" << endl;
//         }
//         else
//         {
//             cout << "No" << endl;
//         }
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
        int n;
        cin >> n;
        vector<int> v;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            sum += val;
            v.push_back(val);
        }

        int ans = v[0];
        for (int i = 1; i < n; i++)
        {
            ans = v[i] | ans;
        }
        if (sum == ans)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}