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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        bool is_even = false;

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (is_even)
            {
                if (v[i] % 2 != 1)
                {
                    count++;
                }
            }
            else
            {
                if (v[i] % 2 != 0)
                {
                    count++;
                }
            }

            is_even = !is_even;
        }

        // ----------
        bool is_even2 = true;
        int count2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (is_even2)
            {
                if (v[i] % 2 != 1)
                {
                    count2++;
                }
            }
            else
            {
                if (v[i] % 2 != 0)
                {
                    count2++;
                }
            }

            is_even2 = !is_even2;
        }

        cout << min(count, count2) << endl;
    }

    return 0;
}