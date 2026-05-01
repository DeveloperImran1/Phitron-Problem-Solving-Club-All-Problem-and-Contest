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

        for (int i = 0; i < n;)
        {
            int a = v[i];
            int b = v[i + 1];
            if (a > b)
            {
                int extra = a - b;
                int minus = ceil(extra / 2);
                v[i] = v[i] - minus;
                v[i + 1] = v[i + 1] + minus;

                i = i + 2;
            }
            else
            {
                i++;
            }

            if (i == (n - 2) || i == (n - 1))
            {
                i++;
                int a1 = v[i];
                int b1 = v[i + 1];
                if (a1 > b1)
                {
                    int extra = a1 - b1;
                    int minus = ceil(extra / 2);
                    v[i] = v[i] - minus;
                    v[i + 1] = v[i + 1] + minus;
                }
                break;
            }
        }
        int is_posible = 1;
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
            // if (v[i] > v[i + 1])
            // {
            //     is_posible = 0;
            //     break;
            // }
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