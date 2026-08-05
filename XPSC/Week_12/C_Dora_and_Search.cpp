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
            int val;
            cin >> val;
            v[i] = val;
        }

        int l_idx = 1;
        int r_idx = n;

        int min_val = 1;
        int max_val = n;

        while (l_idx <= r_idx)
        {
            if (v[l_idx] == min_val)
            {
                l_idx++;
                min_val++;
            }
            else if (v[l_idx] == max_val)
            {
                l_idx++;
                max_val--;
            }

            else if (v[r_idx] == min_val)
            {
                r_idx--;
                min_val++;
            }
            else if (v[r_idx] == max_val)
            {
                r_idx--;
                max_val--;
            }
            else
            {
                break;
            }
        }

        if (l_idx > r_idx)
        {
            cout << -1 << endl;
        }
        else
        {

            cout << l_idx << " " << r_idx << endl;
        }
    }

    return 0;
}