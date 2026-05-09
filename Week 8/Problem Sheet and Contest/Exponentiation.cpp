#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int x, n;
        cin >> x >> n;

        // 3^11
        // => 3*3*3*3*3*3*3*3*3*3*3  // Uporer line ke aivabe likha jai. But TLE asbe boro valur jonno.

        // 3^11
        // => 3^2^0 * 3^2^1 * 3^2^3 // Uporer line ke aivabe likha jai. But TLE asbena. Karon aikhane double power kora hosse.
        // => 3^1 * 3^2 * 3^8      // Uporer line ke aivabe likha jai.

        int ans = 1 % MOD;
        while (n)
        {
            if (n & 1)
            {
                ans = (1LL * ans % MOD * x % MOD) % MOD;
            }

            x = 1LL * x * x % MOD;
            // n = n / 2;
            n >>= 1; // Uporer line ke aivabe 1 bit right shift korlew same result pawa jabe.
        }

        cout << ans << endl;
    }

    return 0;
}