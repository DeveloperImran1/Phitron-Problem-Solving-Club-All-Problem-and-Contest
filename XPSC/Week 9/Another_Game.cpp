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
        int is_done = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] != i + 1)
            {
                cout << i + 2 << endl;
                is_done = 1;
                break;
            }
        }

        if (!is_done)
        {
            cout << 0 << endl;
        }
    }

    return 0;
}