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
        int res = 0;
        int is_exist = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                is_exist = 0;
                int sum = v[i] + v[j];
                for (int x = 2; x * x <= sum; x++)
                {
                    if (sum % x == 0)
                    {
                        is_exist = 1;
                        break;
                    }
                }
                if (is_exist == 0)
                {
                    res++;
                }
            }
        }
        cout << res << endl;
    }

    return 0;
}