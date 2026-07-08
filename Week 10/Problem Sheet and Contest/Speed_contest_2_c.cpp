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
        for (int i = 0, j = n - 1; i <= j; i++, j--)
        {
            if (i % 2 == 0)
            {
                v[i] = 1;
                v[j] = 1;
            }
            else
            {
                v[i] = 0;
                v[j] = 0;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << v[i];
        }
        cout << endl;
    }

    return 0;
}