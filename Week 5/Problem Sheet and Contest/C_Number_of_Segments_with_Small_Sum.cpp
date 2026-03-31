#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long int k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<long long int> freq(n + 1);
    for (int i = 1; i <= n; i++)
    {
        freq[i] = freq[i - 1] + v[i - 1];
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << freq[i] << " ";
    // }

    long long int l = 0, r = 1;
    long long int sum = 0, ans = 0;
    int is_one_time = 0;
    while (l <= n)
    {
        if ((freq[r] - freq[l]) <= k)
        {
            is_one_time = 1;
            r++;
        }
        else if ((freq[r] - freq[l]) > k)
        {
            ans += (r - l - 1);
            l++;
        }

        // cout << l << " " << r << endl;
    }

    if (is_one_time && ans == 0)
    {
        cout << 1 << endl;
    }
    else if (ans == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << ans << endl;
    }

    return 0;
}