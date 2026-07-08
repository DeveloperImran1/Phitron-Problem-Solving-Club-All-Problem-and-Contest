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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<char> v(n + 1);
        for (int i = 0; i < n; i++)
        {
            v[i + 1] = s[i];
        }

        for (int i = n - k; i > 0; i--)
        {
            if (v[i + k] == '1')
            {
                v[i + k] = '0';

                if (v[i] == '0')
                {
                    v[i] = '1';
                }
                else
                {
                    v[i] = '0';
                }
            }
        }

        int is_all_zero = 1;
        for (int i = 1; i <= n; i++)
        {
            if (v[i] == '1')
            {
                is_all_zero = 0;
                break;
            }
        }

        if (is_all_zero)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}