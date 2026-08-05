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

        int is_exist = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {

                for (int k = 1; k <= n; k++)
                {

                    if ((i != j) && (i != k) && (j != k))
                    {
                        if ((v[i] + v[j]) != v[k])
                        {
                            is_exist = 1;
                            cout << i << " " << j << " " << k << endl;
                            break;
                        }
                        // cout << i << " " << j << " " << k << endl;
                    }
                }
                if (is_exist)
                {
                    break;
                }
            }
            if (is_exist)
            {
                break;
            }
        }

        if (!is_exist)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}