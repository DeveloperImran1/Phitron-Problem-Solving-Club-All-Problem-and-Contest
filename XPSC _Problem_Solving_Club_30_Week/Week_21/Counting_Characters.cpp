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
        int a = 0, b = 0;
        for (auto c : s)
        {
            if (c == 'a')
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        cout << a << " " << b << endl;
    }

    return 0;
}