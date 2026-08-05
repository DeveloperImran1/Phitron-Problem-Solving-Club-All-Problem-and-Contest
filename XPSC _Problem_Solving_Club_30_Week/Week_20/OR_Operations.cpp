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
        int total_sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            total_sum = total_sum | v[i];
        }

        int current_count = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            current_count = current_count | v[i];
            if (current_count == total_sum)
            {
                current_count = 0;
                ans++;
            }
        }

        cout << n - ans << endl;
    }

    return 0;
}