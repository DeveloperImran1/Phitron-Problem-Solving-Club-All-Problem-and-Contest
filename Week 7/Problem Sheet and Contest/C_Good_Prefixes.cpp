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
        vector<long long int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<long long int> initial_arr;
        initial_arr.push_back(0);
        long long int count = 0;
        int l = 0;
        long long int mx = INT_MIN;
        while (l < n)
        {
            mx = max(mx, v[l]);
            initial_arr.push_back(initial_arr[l] + v[l]);
            long long int res = initial_arr[l + 1] - mx;
            if (res == mx)
            {
                count++;
            }

            l++;
        }

        cout << count << endl;
    }

    return 0;
}