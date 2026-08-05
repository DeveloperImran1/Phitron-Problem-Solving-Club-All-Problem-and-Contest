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

//         if (n == 1)
//         {
//             cout << 1 << endl;
//             cout << 1 << " " << 2 << endl;
//             continue;
//         }
//         string s = "";
//         for (int i = 0; i < n; i++)
//         {
//             s += "BAN";
//         }

//         vector<int> divisible_n;
//         int current = 0;
//         for (int i = 0; i < n - 1; i++)
//         {
//             if (current)
//             {
//                 divisible_n.push_back(current);
//                 current += current + 3;
//             }
//             else
//             {
//                 divisible_n.push_back(current);
//                 current += current + 3;
//             }
//         }

//         int i = divisible_n.size() - 1, j = s.size() - 1;

//         vector<int> res;
//         while (i != -1)
//         {
//             if (s[divisible_n[i]] != s[j])
//             {
//                 res.push_back(divisible_n[i] + 1);
//                 res.push_back(j + 1);
//                 swap(s[divisible_n[i]], s[j]);
//                 i--, j--;
//             }
//             else
//             {
//                 j--;
//             }
//         }

//         cout << res.size() / 2 << endl;
//         for (int i = 0; i < res.size(); i++)
//         {
//             cout << res[i] << " ";
//             i++;

//             cout << res[i] << endl;
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
        string s = "";
        for (int i = 0; i < n; i++)
        {
            s += "BAN";
        }

        int l = 0, r = s.size() - 1;

        int ans = 0;
        vector<int> res;
        while (l < r)
        {
            if (s[l] == 'B' && s[r] == 'N')
            {
                ans++;
                res.push_back(l + 1);
                res.push_back(r + 1);
            }

            l++, r--;
        }

        cout << ans << endl;
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
            i++;

            cout << res[i] << endl;
        }
    }

    return 0;
}