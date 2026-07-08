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
        int n, x;
        cin >> n >> x;
        int y = (3 * n) - x;
        vector<int> v(3 * n, 1);
        for (int i = 0; i < n; i++)
        {
            if (y >= 2)
            {
                v[i] = 0;
                v[i + n] = 0;
                y -= 2;
            }
            else if (y == 1)
            {
                v[i] = 0;
                y--;
            }
        }

        for (int i = 0; i < n && y > 0; i++)
        {
            if (y > 0)
            {
                v[i + (2 * n)] = 0;
                y--;
            }
        }

        for (int i = 0; i < 3 * n; i++)
        {
            cout << v[i];
        }
        cout << endl;
    }

    return 0;
}