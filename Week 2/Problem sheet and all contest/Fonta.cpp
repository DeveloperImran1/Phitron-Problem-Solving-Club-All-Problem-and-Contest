#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    if (s[2] == 'n' && s[3] == 't' && s[4] == 'a')
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}