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
        int count = 0;
        for (int i = 0; i < n - 2; i++)
        {
            char c = s[i];
            if (s[i] == c && s[i + 1] == c && s[i + 2] == c)
            {
                count++;
                i += 2;
            }
        }
        cout << count << endl;
    }

    return 0;
}