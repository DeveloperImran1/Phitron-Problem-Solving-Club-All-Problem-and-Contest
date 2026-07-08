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

        long long int mx = v[0];
        long long int time = 0;
        for (int i = 1; i < n; i++)
        {
            if (mx > v[i])
            {
                time += mx - v[i];
            }
            mx = max(mx, v[i]);
        }

        cout << time << endl;
    }

    return 0;
}