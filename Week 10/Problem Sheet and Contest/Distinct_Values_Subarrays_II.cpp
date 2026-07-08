#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    map<int, int> mp;
    long long int count = 0;
    mp[v[0]]++;
    for (int l = 0, r = 0; r < n;)
    {
        if (mp.size() <= k && mp.size() != 0)
        {
            count += (r - l) + 1;
            r++;
            mp[v[r]]++;
        }
        else
        {
            mp[v[l]]--;
            if (mp[v[l]] == 0)
            {
                mp.erase(v[l]);
            }
            l++;
        }
    }
    cout << count << endl;

    return 0;
}