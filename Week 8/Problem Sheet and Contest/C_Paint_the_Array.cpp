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
        long long int n;
        cin >> n;
        vector<long long int> v(n);
        vector<long long int> v1;
        vector<long long int> v2;
        for (long long int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (i % 2 == 0)
            {
                v2.push_back(v[i]);
            }
            else
            {
                v1.push_back(v[i]);
            }
        }

        // for v1 array
        long long int gcd_1 = v1[0];
        for (long long int i = 1; i < v1.size(); i++)
        {
            gcd_1 = __gcd(gcd_1, v1[i]);
        }

        long long int is_exist = 0;
        for (long long int i = 0; i < v2.size(); i++)
        {
            if (v2[i] % gcd_1 == 0)
            {
                is_exist = 1;
                break;
            }
        }

        if (is_exist == 0)
        {
            cout << gcd_1 << endl;
            continue;
        }

        // for v2 array
        long long int gcd_2 = v2[0];
        for (long long int i = 1; i < v2.size(); i++)
        {
            gcd_2 = __gcd(gcd_2, v2[i]);
        }

        long long int is_exist_2 = 0;
        for (long long int i = 0; i < v1.size(); i++)
        {
            if (v1[i] % gcd_2 == 0)
            {
                is_exist_2 = 1;
                break;
            }
        }

        if (is_exist_2 == 0)
        {
            cout << gcd_2 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}