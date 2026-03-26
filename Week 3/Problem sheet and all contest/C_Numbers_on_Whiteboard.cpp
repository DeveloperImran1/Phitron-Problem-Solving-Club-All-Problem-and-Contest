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
//         vector<int> v(n);
//         for (int i = 0; i < n; i++)
//         {
//             v[i] = i + 1;
//         }

//         vector<pair<int, int>> pairs;
//         for (int i = n - 1; i > 0; i--)
//         {
//             if ((i % 2 == 1) && (i > 1))
//             {
//                 pairs.push_back({v[i], v[i - 2]});
//                 v[i - 2] = (v[i] + v[i - 2]) / 2;
//                 v.pop_back();
//             }
//             else
//             {
//                 pairs.push_back({v[i], v[i - 1]});
//                 v[i - 1] = (v[i] + v[i - 1]) / 2;
//                 v.pop_back();
//             }
//         }

//         cout << v[0] << endl;
//         for (auto [key, value] : pairs)
//         {
//             cout << key << " " << value << endl;
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
        priority_queue<int> pq;
        for (int i = 1; i <= n; i++)
        {
            pq.push(i);
        }

        // cout << pq.top();
        // while (pq.size() >= 1)
        // {
        //     cout << pq.top();
        //     pq.pop();
        // }

        vector<pair<int, int>> pairs;
        while (pq.size() > 1)
        {
            int first = pq.top();
            pq.pop();
            int second = pq.top();
            pq.pop();

            pairs.push_back({first, second});
            int new_val = ceil((first + second) / 2.0);
            pq.push(new_val);
        }

        // cout << pq.top() << endl;
        // for (auto [key, value] : pairs)
        // {
        //     cout << key << " " << value << endl;
        // }
    }

    return 0;
}