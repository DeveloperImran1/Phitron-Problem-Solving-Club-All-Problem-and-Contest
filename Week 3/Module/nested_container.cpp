#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // akta map er moddhe key hisabe vector ke rakhtesi and value hisabe int type er value rakhtesi.
    // map<vector<int>, int> mp;
    // vector<int> v;
    // v.push_back(10);
    // v.push_back(3);
    // v.push_back(40);
    // v.push_back(10);
    // v.push_back(30);
    // v.push_back(3);
    // v.push_back(2);

    // mp[v] = 5;
    // for (auto [key, value] : mp)
    // {
    //     for (int elem : key)
    //     {

    //         cout << elem << " ";
    //     }
    //     cout << '\n';
    //     cout << value << endl;
    // }

    // akta map er moddhe key hisabe int type er value ke rakhtesi and value hisabe set rakhtesi.
    map<int, set<int>> mp;
    set<int> s1;
    s1.insert(10);
    s1.insert(3);
    s1.insert(3);
    s1.insert(4);

    set<int> s2;
    s2.insert(9);
    s2.insert(5);
    s2.insert(3);
    s2.insert(6);

    set<int> s3;
    s3.insert(8);
    s3.insert(5);
    s3.insert(7);
    s3.insert(6);

    mp[3] = s1;
    mp[5] = s2;
    mp[2] = s3;

    for (auto [x, y] : mp)
    {
        cout << x << " --> ";
        for (int value : y)
        {
            cout << value << " ";
        }
        cout << '\n';
    }

    auto lower_bound_of_key_address = mp.lower_bound(4);
    if (lower_bound_of_key_address != mp.end())
    {
        int lower_bound_of_key = lower_bound_of_key_address->first;
        auto key_er_lower_bound_address = mp[lower_bound_of_key].lower_bound(7);

        if (key_er_lower_bound_address != mp[lower_bound_of_key].end())
        {
            cout << *key_er_lower_bound_address << " ";
        }
    }
    return 0;
}