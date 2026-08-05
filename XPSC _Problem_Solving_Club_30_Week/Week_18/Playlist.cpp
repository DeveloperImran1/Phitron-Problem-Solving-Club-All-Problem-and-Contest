#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int mx = 0;
    int count = 0;
    map<int, int> mp;
    for (int l = 0, r = 0; r < n;)
    {

        if (mp.count(v[r]) == 0 || mp[v[r]] == 0)
        {
            mp[v[r]]++;
            r++;
            count++;
            mx = max(mx, count);
        }
        else
        {
            mp[v[l]]--;
            if (mp[v[l]] < 0)
            {
                mp[v[l]] = 0;
            }
            count--;
            l++;
        }
    }

    cout << mx;

    return 0;
}