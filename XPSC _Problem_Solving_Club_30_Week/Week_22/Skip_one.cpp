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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int mx = v[0];
        k += mx;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (mx < v[i])
            {
                k -= mx;
                mx = v[i];
                k += mx;
            }
            k -= v[i];
            if (k < 0)
            {
                break;
            }
            count++;
        }
        cout << count << endl;
    }

    return 0;
}