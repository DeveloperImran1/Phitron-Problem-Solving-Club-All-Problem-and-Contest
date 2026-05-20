// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }

//     cout << 0 << " ";

//     multiset<pair<int, int>> ml;
//     ml.insert({v[0], 0});

//     for (int i = 1; i < n; i++)
//     {
//         auto it = ml.lower_bound({v[i], i});
//         if (it == ml.begin())
//         {
//             cout << 0 << " ";
//         }
//         else
//         {
//             it--;
//             cout << it->second + 1 << " ";
//         }

//         auto l = ml.begin();
//         while (l != ml.end())
//         {
//             if (l->first >= v[i])
//             {
//                 l = ml.erase(l);
//             }
//             else
//             {
//                 l++;
//             }
//         }
//         ml.insert({v[i], i});
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    stack<pair<int, int>> st;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && st.top().first >= v[i])
        {
            st.pop();
        }
        if (st.empty())
        {
            cout << 0 << " ";
        }
        else
        {
            cout << st.top().second << " ";
        }

        st.push({v[i], i + 1});
    }

    return 0;
}