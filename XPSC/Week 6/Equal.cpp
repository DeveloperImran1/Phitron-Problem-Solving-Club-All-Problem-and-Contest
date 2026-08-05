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
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }

        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                int minus_val = v[i] - i;
                int target_val = minus_val + j;
                if (v[j] == target_val)
                {
                    count++;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}