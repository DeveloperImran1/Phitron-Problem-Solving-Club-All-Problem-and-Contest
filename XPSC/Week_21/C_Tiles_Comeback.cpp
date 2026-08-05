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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        if (v[0] == v[n - 1])
        {
            if (mp[v[0]] >= k)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            int count_1 = 0;
            int count_2 = 0;
            for (int i = 0; i < n; i++)
            {
                if (count_1 < k)
                {
                    if (v[i] == v[0])
                    {
                        count_1++;
                    }
                }
                else
                {
                    if (v[i] == v[n - 1])
                    {
                        count_2++;
                    }
                }
            }

            if (count_1 >= k && count_2 >= k)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}