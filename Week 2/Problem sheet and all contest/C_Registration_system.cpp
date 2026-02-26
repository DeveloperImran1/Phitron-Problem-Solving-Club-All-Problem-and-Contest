#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> v;
    map<string, int> mp;

    while (n--)
    {

        string s;
        cin >> s;

        auto it = mp.find(s);

        if (it == mp.end())
        {
            v.push_back(s);
            mp[s] = 1;
            cout << "OK" << endl;
        }
        else
        {
            int word_val = mp[s];
            string new_word = s + to_string(word_val);
            v.push_back(new_word);
            mp[new_word] = 1;
            mp[s]++;
            cout << new_word << endl;
        }
    }

    return 0;
}