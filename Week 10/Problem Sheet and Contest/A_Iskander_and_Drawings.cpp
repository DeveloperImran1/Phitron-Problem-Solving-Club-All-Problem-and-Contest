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

        int mx = 0;
        int count = 0;
        for (char c : s)
        {
            if (c == '#')
            {
                count++;
                mx = max(mx, count);
            }
            else
            {
                count = 0;
            }
        }
        cout << ceil(double(mx) / 2) << endl;
    }

    return 0;
}