#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    map<char, int> mp;
    for (char c : s)
    {
        mp[c]++;
    }

    int total_odd = 0;
    for (auto [key, val] : mp)
    {
        // cout << key << " " << val << endl;
        if (val % 2 == 1)
        {
            total_odd++;
        }
    }
    if (total_odd >= 2)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    // 1st part
    for (auto [key, val] : mp)
    {

        int half = val / 2;
        for (int i = 0; i < half; i++)
        {
            cout << key;
        }
    }

    // middle part
    for (auto [key, val] : mp)
    {
        if (val % 2 == 1)
        {
            cout << key;
        }
    }

    // last part
    for (auto it = mp.rbegin(); it != mp.rend(); it++)
    {

        int half = it->second / 2;
        for (int i = 0; i < half; i++)
        {
            cout << it->first;
        }
    }

    return 0;
}