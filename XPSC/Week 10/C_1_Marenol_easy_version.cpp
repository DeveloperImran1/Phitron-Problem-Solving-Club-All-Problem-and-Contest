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
        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i];
        // }
        // cout << endl;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << b[i];
        // }
        // cout << endl;

        // even er jonno
        int total_1_in_even_a = 0;
        for (int i = 0; i < n; i += 2)
        {
            if (a[i] == '1')
            {
                total_1_in_even_a++;
            }
        }
        int total_1_in_even_b = 0;
        for (int i = 0; i < n; i += 2)
        {
            if (b[i] == '1')
            {
                total_1_in_even_b++;
            }
        }

        // odd er jonno
        int total_1_in_odd_a = 0;
        for (int i = 1; i < n; i += 2)
        {
            if (a[i] == '1')
            {
                total_1_in_odd_a++;
            }
        }
        int total_1_in_odd_b = 0;
        for (int i = 1; i < n; i += 2)
        {
            if (b[i] == '1')
            {
                total_1_in_odd_b++;
            }
        }

        // cout << total_1_in_even_a << " " << total_1_in_even_b << endl;
        if (total_1_in_even_a == total_1_in_even_b && total_1_in_odd_a == total_1_in_odd_b)
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