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
        int sum = 0;
        int is_odd_exist = 0;
        int is_even_exist = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
            if (v[i] % 2 == 0)
            {
                is_even_exist++;
            }
            else
            {
                is_odd_exist++;
            }
        }

        if (sum % 2 == 0 && is_even_exist)
        {
            cout << "Yes" << endl;
        }
        else if (sum % 2 == 1 && is_odd_exist)
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