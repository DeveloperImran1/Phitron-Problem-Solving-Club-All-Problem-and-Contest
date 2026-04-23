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
        int n = s.length();

        if (s == "()")
        {
            cout << "NO" << endl;
            continue;
        }

        string t1 = "";
        for (int i = 0; i < n; i++)
        {
            t1 += "()";
        }

        string t2 = "";
        for (int i = 0; i < n; i++)
        {
            t2 += "(";
        }
        for (int i = 0; i < n; i++)
        {
            t2 += ")";
        }

        auto it = search(t1.begin(), t1.end(), s.begin(), s.end());

        if (it == t1.end())
        {
            cout << "YES" << endl;
            cout << t1 << endl;
            continue;
        }
        auto it2 = search(t2.begin(), t2.end(), s.begin(), s.end());

        if (it2 == t2.end())
        {
            cout << "YES" << endl;
            cout << t2 << endl;
            continue;
        }

        cout << "NO" << endl;
    }

    return 0;
}