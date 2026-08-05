#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    vector<bool> v(n, false);
    for (int j = 0; j < n; j++)
    {
        for (int i = j + 1; i < n; i++)
        {
            if (s[j] == s[i])
            {
                v[i] = true;
            }
        }
    }

    for (int x : v)
    {
        x ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}