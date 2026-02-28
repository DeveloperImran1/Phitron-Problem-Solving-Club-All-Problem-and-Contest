#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;

        vector<int> v(26, 0);
        char un_available = 'a';
        for (int i = 0; i < s.size(); i++)
        {
            v[s[i] - 97]++;
        }

        for (int i = 0; i < 26; i++)
        {
            if (v[i] == 0)
            {
                char c = i + 97;
                un_available = c;
                break;
            }
        }

        int flag = 1;
        for (int i = 0; i < s.size(); i++)
        {
            cout << s[i];
            if (flag && s[i] == s[i + 1])
            {
                cout << un_available;
                flag = 0;
            }
        }
        if (flag)
        {
            cout << un_available;
        }
        cout << '\n';
    }

    return 0;
}