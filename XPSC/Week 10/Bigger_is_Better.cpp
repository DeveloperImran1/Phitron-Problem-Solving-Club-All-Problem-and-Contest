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
        string a;
        cin >> a;

        int is_all_z = 0;
        for (char c : a)
        {
            if (c != 'z')
            {
                is_all_z = 1;
                break;
            }
        }

        if (is_all_z)
        {
            for (int i = 0; i < n; i++)
            {
                cout << 'z';
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}