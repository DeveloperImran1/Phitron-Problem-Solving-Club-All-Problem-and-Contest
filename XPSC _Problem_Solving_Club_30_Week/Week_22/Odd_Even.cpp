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

        int odd = 0, even = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }

            if (odd == even)
            {
                ans = odd + even;
            }
            else if (odd + 1 == even)
            {
                ans = odd + even;
            }
            else if (odd == even + 1)
            {
                ans = odd + even;
            }
        }

        if (odd < even)
        {
            ans = 2 * odd + 1;
        }
        else if (even < odd)
        {
            ans = 2 * even + 1;
        }
        else if (even == odd)
        {
            ans = 2 * even;
        }
        cout << ans << endl;
    }

    return 0;
}