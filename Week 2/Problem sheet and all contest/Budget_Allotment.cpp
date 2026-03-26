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
        int n, x;
        cin >> n >> x;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end(), greater<int>());

        long long int count = 0;
        int result = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > x)
            {
                count += (v[i] - x);
                result++;
            }
            else if (v[i] == x)
            {
                result++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if ((v[i] < x) && count >= (x - v[i]))
            {
                count -= (x - v[i]);
                result++;
            }
        }

        cout << result << endl;
    }

    return 0;
}