#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    long long int total_r = (n / a), total_b = (n / b);
    long long int gcd = __gcd(a, b);
    long long int lcm = (a * b) / gcd;

    long long int common = n / lcm;

    long long int extra_sum_remove = common * (p + q);
    long long int extra_sum_add = common * max(p, q);
    long long int res = ((p * total_r) + (q * total_b)) - extra_sum_remove + extra_sum_add;
    cout << res << endl;

    // int mn = min(a, b);

    // long long int res = (total_r * p) + (total_b * q);
    // cout << total_r << "  " << total_b << " " << common << endl;
    return 0;
}