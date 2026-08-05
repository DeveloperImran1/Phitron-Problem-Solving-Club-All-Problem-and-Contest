#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;

    // charecter wise string input
    // for (int i = 0; i < n; i++)
    // {
    //     char c;
    //     cin >> c;
    //     s.push_back(c);
    // }

    // full string akbare input
    cin >> s;
    // s.pop_back();
    // cout << s;

    // cout << s.front() << " " << s.back() << '\n';

    // s.clear();
    // cout << s.empty() << '\n';

    cout << s.substr(2) << '\n'; // string er 2 number index theke last porjonto sokol charecter ke return korbe.
    cout << s.substr(1, 3);      // string er 1 number index theke suro kore porer 3 ta charecter ke return korbe.

    return 0;
}