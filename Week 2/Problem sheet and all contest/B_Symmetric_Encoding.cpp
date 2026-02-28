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
        string s;
        cin >> s;

        vector<char> unique;
        vector<bool> asci(26, 0);

        for (int i = 0; i < n; i++)
        {

            if (asci[s[i] - 97] == 0)
            {
                unique.push_back(s[i]);
                asci[s[i] - 97] = 1;
            }
        }

        sort(unique.begin(), unique.end());
        map<char, char> mp;
        for (int i = 0, j = unique.size() - 1; i <= j; i++, j--)
        {
            mp[unique[i]] = unique[j];
            mp[unique[j]] = unique[i];
        }

        for (int i = 0; i < n; i++)
        {
            cout << mp[s[i]];
        }

        cout << endl;
    }

    return 0;
}