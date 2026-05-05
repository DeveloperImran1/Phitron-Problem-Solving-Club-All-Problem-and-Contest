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
//         int all_zero = 0;
//         vector<int> v(n + 1);
//         for (int i = 1; i <= n; i++)
//         {
//             cin >> v[i];
//             if (v[i] == 1)
//             {
//                 all_zero = 1;
//             }
//         }

//         if (!all_zero)
//         {
//             cout << "No" << endl;
//             continue;
//         }

//         set<int> s;
//         int imposible = 0;
//         for (int i = 1; i <= n; i++)
//         {
//             if (s.size() == 0 && v[i] == 1)
//             {
//                 s.insert(i);
//                 continue;
//             }
//             if (v[i] == 1)
//             {
//                 int last_elem = *s.rend();
//                 // cout << last_elem << endl;
//                 if ((i - last_elem) > k)
//                 {
//                     s.insert(i);
//                 }
//                 else
//                 {
//                     imposible = 1;
//                     break;
//                 }
//             }
//         }

//         if (!imposible)
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
        int n, k;
        cin >> n >> k;
        int all_zero = 0;
        vector<int> v(n + 1);
        vector<int> wanted_elem;

        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            if (v[i] == 1)
            {
                all_zero = 1;
                wanted_elem.push_back(i);
            }
        }

        if (!all_zero)
        {
            cout << "No" << endl;
            continue;
        }

        int posible = 1;
        for (int i = 0; i < wanted_elem.size() - 1; i++)
        {
            if (wanted_elem[i + 1] - wanted_elem[i] <= k)
            {
                posible = 0;
                break;
            }
        }

        if (posible == 0)
        {
            cout << "No" << endl;
            continue;
        }

        for (int i = 1; i <= n; i++)
        {
            if (v[i] == 0)
            {
                int exist = 0;

                for (int j = i; j <= i + k; j++)
                {
                    if (j <= n && v[j] == 1)
                    {
                        exist = 1;
                    }
                }
                for (int j = i; j >= i - k; j--)
                {
                    if (j > 0 && v[j] == 1)
                    {
                        exist = 1;
                    }
                }

                if (exist == 0)
                {
                    posible = 0;
                    break;
                }
            }
        }

        if (posible)
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