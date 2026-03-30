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
        set<pair<int, char>> s;
        for (int i = 1; i <= n; i++)
        {
            int val;
            cin >> val;
            if (i % 2 == 0)
            {

                pair<int, char> p = {val, 'B'};
                s.insert(p);
            }
            else
            {
                pair<int, char> p = {val, 'R'};
                s.insert(p);
            }
        }

        char current = 'M';
        string result = "YES";
        for (auto [key, value] : s)
        {
            if (current == 'M')
            {
                current = value;
            }
            else
            {
                if (current == value)
                {
                    result = "NO";
                    break;
                }
                current = value;
            }
        }
        cout << result << endl;
    }

    return 0;
}