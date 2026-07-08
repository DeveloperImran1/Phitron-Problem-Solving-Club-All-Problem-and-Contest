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
        vector<int> v(n);
        int total_seat = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            total_seat += v[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int current_total = v[i] + v[j];
                int prev_total = (total_seat - current_total) / 2;
                if ((current_total + prev_total) > k)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}