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

        vector<long long int> v(k);
        for (int i = 0; i < k; i++)
        {
            cin >> v[i];
        }

        vector<long long int> res;
        res.push_back(v[0]);
        for (int i = 1; i < k; i++)
        {
            long long int val = v[i] - v[i - 1];
            res.push_back(val);
        }

        int is_sorted = 1;
        for (int i = 2; i < k; i++)
        {
            if (res[i] < res[i - 1])
            {
                is_sorted = 0;
                break;
            }
        }

        if (k > 1 && is_sorted)
        {
            int remain = n - k + 1;
            long long int mx_posible_sum = remain * res[1];
            if (res[0] > mx_posible_sum)
            {
                is_sorted = false;
            }
        }

        if (is_sorted)
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