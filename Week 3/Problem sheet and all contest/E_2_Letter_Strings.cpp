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
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v[i] = s;
        }

        map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[v[i]]++;
        }

        long long int res = 0;
        for (int i = 0; i < n; i++)
        {
            mp[v[i]]--;
            string a = v[i], b = v[i];
            for (char j = 'a'; j <= 'k'; j++)
            {
                a[0] = j;
                b[1] = j;
                if (a != v[i])
                {
                    res += mp[a];
                }
                if (b != v[i])
                {
                    res += mp[b];
                }
            }
        }
        cout << res << endl;
    }

    return 0;
}