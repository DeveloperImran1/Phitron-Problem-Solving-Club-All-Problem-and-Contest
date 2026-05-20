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

        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        if (n == 2)
        {
            cout << "Yes" << endl;
            continue;
        }

        sort(v.begin(), v.end());
        int mid_l = n / 2;
        int mid_r = (n / 2) + 1;

        int l = mid_l - 1;
        int r = mid_r + 1;

        int is_posible = 1;
        while (l > 0 && r <= n)
        {
            if ((v[mid_l] - v[l]) != (v[r] - v[mid_r]))
            {
                is_posible = 0;
                break;
            }
            l--, r++;
        }

        if (is_posible)
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