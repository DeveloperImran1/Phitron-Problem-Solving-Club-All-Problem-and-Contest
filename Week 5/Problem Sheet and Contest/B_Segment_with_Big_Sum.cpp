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

    int l = 0, r = 0, ans = -1;
    long long int sum = 0;
    while (r < n)
    {
        sum += v[r];
        if (sum >= k)
        {
            while (sum >= k)
            {
                if (ans == -1)
                {
                    ans = (r - l + 1);
                }
                else
                {
                    ans = min(ans, (r - l + 1));
                }

                sum -= v[l];
                l++;
            }
        }
        r++;
    }

    cout << ans;

    return 0;
}