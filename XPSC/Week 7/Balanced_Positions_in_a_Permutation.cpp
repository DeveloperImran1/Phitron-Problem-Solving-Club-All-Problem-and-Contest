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

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int l = 0, r = 0;
            int curent_val = v[i];
            for (int a = 0; a < i; a++)
            {
                if (v[a] < curent_val)
                {
                    l++;
                }
            }
            for (int b = n - 1; b > i; b--)
            {
                if (v[b] > curent_val)
                {
                    r++;
                }
            }

            if (l == r)
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}