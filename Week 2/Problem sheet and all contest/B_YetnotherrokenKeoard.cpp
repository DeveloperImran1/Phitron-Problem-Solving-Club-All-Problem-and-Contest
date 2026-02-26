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
//         string s;
//         cin >> s;

//         vector<char> v;
//         stack<int> c_idx;
//         stack<int> s_idx;
//         c_idx.push(-1);
//         s_idx.push(-1);

//         for (char c : s)
//         {
//             if (c == 'b')
//             {
//                 int last_idx = s_idx.top();

//                 if (last_idx != -1)
//                 {
//                     v.erase(v.begin() + last_idx);
//                     if (c_idx.top() > last_idx)
//                     {
//                         s_idx.pop();
//                         int updated_idx = c_idx.top() - 1;
//                         c_idx.pop();

//                         stack<int> tmp;
//                         while (c_idx.top() >= last_idx)
//                         {
//                             tmp.push(c_idx.top());
//                             c_idx.pop();
//                         }

//                         while (!tmp.empty())
//                         {
//                             c_idx.push(tmp.top());
//                             tmp.pop();
//                         }

//                         c_idx.push(updated_idx);
//                     }
//                     else
//                     {
//                         s_idx.pop();
//                     }
//                 }
//             }
//             else if (c == 'B')
//             {
//                 int last_idx = c_idx.top();
//                 if (last_idx != -1)
//                 {
//                     v.erase(v.begin() + last_idx);
//                     if (s_idx.top() > last_idx)
//                     {
//                         c_idx.pop();
//                         int updated_idx = s_idx.top() - 1;
//                         s_idx.pop();

//                         stack<int> tmp;
//                         while (s_idx.top() >= last_idx)
//                         {
//                             tmp.push(s_idx.top());
//                             s_idx.pop();
//                         }

//                         while (!tmp.empty())
//                         {
//                             s_idx.push(tmp.top());
//                             tmp.pop();
//                         }

//                         s_idx.push(updated_idx);
//                     }
//                     else
//                     {
//                         c_idx.pop();
//                     }
//                 }
//             }
//             else
//             {
//                 v.push_back(c);
//                 if (c >= 'a' && c <= 'z')
//                 {
//                     int idx = max(s_idx.top(), c_idx.top());
//                     s_idx.push(idx + 1);
//                 }
//                 else if (c >= 'A' && c <= 'Z')
//                 {
//                     int idx = max(s_idx.top(), c_idx.top());
//                     c_idx.push(idx + 1);
//                 }
//             }
//         }

//         for (char c : v)
//         {
//             cout << c;
//         }
//         cout << '\n';
//     }

//     return 0;
// }

// Solution 2:
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
        string s;
        cin >> s;
        int length = s.size();

        vector<bool> idx(length, true);
        vector<int> s_idx;
        vector<int> c_idx;

        for (int i = 0; i < length; i++)
        {
            if (s[i] == 'b')
            {
                idx[i] = false;
                if (!s_idx.empty())
                {
                    idx[s_idx.back()] = false;
                    s_idx.pop_back();
                }
            }
            else if (s[i] == 'B')
            {
                idx[i] = false;
                if (!c_idx.empty())
                {
                    idx[c_idx.back()] = false;
                    c_idx.pop_back();
                }
            }
            else
            {
                if (s[i] >= 'a' && s[i] <= 'z')
                {
                    s_idx.push_back(i);
                }
                else
                {
                    c_idx.push_back(i);
                }
            }
        }

        for (int i = 0; i < length; i++)
        {
            if (idx[i] == true)
            {
                cout << s[i];
            }
        }
        cout << '\n';
    }

    return 0;
}