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
        string a, b;
        cin >> a >> b;

        int total_one = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
            {
                total_one++;
            }
        }

        while (1)
        {
            int is_changed = 0;

            for (int i = 0; i < n; i++)
            {
                if (a[i] == '1' && i >= 1 && b[i - 1] == '0')
                {
                    swap(a[i], b[i - 1]);
                    total_one--;
                    is_changed = 1;
                }
                else if (a[i] == '1' && i < n - 1 && b[i + 1] == '0')
                {
                    swap(a[i], b[i + 1]);
                    total_one--;
                    is_changed = 1;
                }

                if (total_one == 0)
                {
                    break;
                }
            }

            for (int i = 0; i < n; i++)
            {
                cout << a[i];
            }
            cout << '\n';

            if (!is_changed)
            {
                break;
            }
        }

        // cout << total_one << endl;
    }

    return 0;
}