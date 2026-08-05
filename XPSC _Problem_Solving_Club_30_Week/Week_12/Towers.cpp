#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<priority_queue<int>> v;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        if (!v.empty())
        {

            int isExist = 0;
            for (auto &an_pq : v)
            {

                if (val < an_pq.top())
                {
                    an_pq.push(val);
                    isExist = 1;
                    break;
                }
            }

            if (isExist == 0)
            {
                priority_queue<int> pq;
                pq.push(val);
                v.push_back(pq);
            }
        }
        else
        {
            priority_queue<int> pq;

            pq.push(val);
            v.push_back(pq);
        }
    }

    cout << v.size() << endl;

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;
//     multiset<int> mls;
//     for (int i = 0; i < n; i++)
//     {
//         int val;
//         cin >> val;
//         if (mls.empty())
//         {
//             mls.insert(val);
//         }
//         else
//         {
//             auto it = mls.upper_bound(val);
//             if (it == mls.end())
//             {
//                 mls.insert(val);
//             }
//             else
//             {
//                 mls.erase(it);
//                 mls.insert(val);
//             }
//         }
//     }

//     cout << mls.size() << endl;

//     return 0;
// }