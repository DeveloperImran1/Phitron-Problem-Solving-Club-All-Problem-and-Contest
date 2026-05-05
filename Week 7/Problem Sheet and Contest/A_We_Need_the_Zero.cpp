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
        vector<int> v(n);
        int zor = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            zor = zor ^ v[i];
        }

        if (n % 2 == 1)
        {
            cout << zor << endl;
        }
        else
        {
            if (zor == 0)
            {
                cout << 3 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}