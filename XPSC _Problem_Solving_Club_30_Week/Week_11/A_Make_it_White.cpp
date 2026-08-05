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

        int first = -1;
        int second = -1;
        for (int i = 0, j = n - 1; i < n; i++, j--)
        {
            if (first == -1 && s[i] == 'B')
            {
                first = i;
            }
            if (second == -1 && s[j] == 'B')
            {
                second = j;
            }
        }

        if (first == -1 && second != -1)
        {
            cout << 1 << endl;
        }
        else if (first != -1 && second == -1)
        {
            cout << 1 << endl;
        }
        else if (first == -1 && second == -1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << (second - first) + 1 << endl;
        }
    }

    return 0;
}