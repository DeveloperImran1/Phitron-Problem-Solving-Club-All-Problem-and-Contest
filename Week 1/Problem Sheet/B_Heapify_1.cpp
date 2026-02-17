#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 1; i <= n; i++)
        {
            int val;
            cin >> val;
            v[i] = val;
        }

        int is_updated = 1;
        int is_sorted = 1;
        while (is_updated)
        {
            is_updated = 0;
            is_sorted = 1;

            for (int i = 1; i <= n / 2; i++)
            {
                if (v[i] > v[2 * i])
                {
                    swap(v[i], v[2 * i]);
                    is_updated = 1;
                }
            }

            for (int i = 1; i < n; i++)
            {
                if (v[i] > v[i + 1])
                {
                    is_sorted = 0;
                    break;
                }
            }

            if (is_sorted)
            {
                break;
            }
        }

        is_sorted ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}