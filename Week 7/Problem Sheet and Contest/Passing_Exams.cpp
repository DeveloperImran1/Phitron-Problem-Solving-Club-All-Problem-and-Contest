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
        int i, j, k;
        cin >> i >> j >> k;
        int count = 0;
        if (i >= 50)
        {
            count++;
        }
        if (j >= 50)
        {
            count++;
        }
        if (k >= 50)
        {
            count++;
        }

        if (count >= 2)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}