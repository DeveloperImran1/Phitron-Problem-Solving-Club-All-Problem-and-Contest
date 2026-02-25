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

//         map<string, int> mp;

//         vector<string> first_person(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> first_person[i];
//             mp[first_person[i]]++;
//         }

//         vector<string> second_person(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> second_person[i];
//             mp[second_person[i]]++;
//         }

//         vector<string> third_person(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> third_person[i];
//             mp[third_person[i]]++;
//         }

//         int person1 = 0, person2 = 0, person3 = 0;
//         for (auto [first, second] : mp)
//         {
//             // cout << first << " " << second << endl;
//             auto it = find(first_person.begin(), first_person.end(), first);
//             auto it2 = find(second_person.begin(), second_person.end(), first);
//             auto it3 = find(third_person.begin(), third_person.end(), first);

//             if (second == 1)
//             {
//                 if (it != first_person.end())
//                 {
//                     person1 += 3;
//                 }
//                 if (it2 != second_person.end())
//                 {
//                     person2 += 3;
//                 }
//                 if (it3 != third_person.end())
//                 {
//                     person3 += 3;
//                 }
//             }
//             else if (second == 2)
//             {
//                 if (it != first_person.end())
//                 {
//                     person1 += 1;
//                 }
//                 if (it2 != second_person.end())
//                 {
//                     person2 += 1;
//                 }
//                 if (it3 != third_person.end())
//                 {
//                     person3 += 1;
//                 }
//             }
//         }

//         cout << person1 << " " << person2 << " " << person3 << '\n';
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
        int n;
        cin >> n;

        map<string, vector<int>> mp;
        for (int i = 1; i <= 3; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                string s;
                cin >> s;
                mp[s].push_back(i);
            }
        }

        int person1 = 0, person2 = 0, person3 = 0;
        for (auto [word, v] : mp)
        {
            for (int i : v)
            {
                if (v.size() == 1)
                {
                    if (i == 1)
                    {
                        person1 += 3;
                    }
                    else if (i == 2)
                    {
                        person2 += 3;
                    }
                    else if (i == 3)
                    {
                        person3 += 3;
                    }
                }
                else if (v.size() == 2)
                {
                    if (i == 1)
                    {
                        person1 += 1;
                    }
                    else if (i == 2)
                    {
                        person2 += 1;
                    }
                    else if (i == 3)
                    {
                        person3 += 1;
                    }
                }
                // cout << word << " " << i << endl;
            }
        }

        cout << person1 << " " << person2 << " " << person3 << '\n';
    }

    return 0;
}