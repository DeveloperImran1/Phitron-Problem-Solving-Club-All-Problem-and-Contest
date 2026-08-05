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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        bool has_lower = false;
        bool has_greater = false;
        bool has_equal = false;
        for (int i = 0; i < n; i++)
        {
            if (v[i] < x)
            {
                has_lower = true;
            }
            else if (v[i] > x)
            {
                has_greater = true;
            }
            else if (v[i] == x)
            {
                has_equal = true;
            }
        }

        if ((has_lower && !has_greater) || (!has_lower && has_greater))
        {
            cout << "Yes" << endl;
        }
        else if (has_equal)
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