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

        int total_xor = 0;
        for (int i = 0; i < n; i++)
        {
            total_xor = total_xor ^ v[i];
        }

        int mn = total_xor;
        for (int i = 0; i < n; i++)
        {
            int curent = total_xor ^ v[i];
            mn = min(mn, curent);
        }

        cout << mn << endl;
    }

    return 0;
}