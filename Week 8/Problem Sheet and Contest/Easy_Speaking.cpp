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
        string s;
        cin >> s;

        if (n < 4)
        {
            cout << "No" << endl;
        }
        else
        {
            int is_posible = 1;
            int l = 0, r = 3;
            while (r < n)
            {
                is_posible = 1;
                for (int i = l; i <= r; i++)
                {
                    if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
                    {
                    }
                    else
                    {
                        is_posible = 0;
                    }
                }
                if (is_posible)
                {
                    cout << "Yes" << endl;
                    break;
                }

                l++, r++;
            }

            if (!is_posible)
            {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}