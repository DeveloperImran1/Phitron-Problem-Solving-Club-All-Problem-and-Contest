#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    // GCD ber korar 2ta value er upor loop chalia korte pari manualy. Or C++ er built in function use korte pari __gcd
    // Aikhane __gcd(a, b); er Time complexity holo: O(log(min(a, b)))
    int res = __gcd(a, b);
    cout << res << endl;

    // LCM ber korar rules holo:
    //   GCD(a, b) * LCM(a, b) == a*b;
    // ⇒ LCM(a, b) == (a*b) / (GCD(a, b));
    int res2 = (a * b) / res; // O(log(min(a, b)))
    // aikhane (a*b) / res korar fole long long a jete pare. Tai jodin int er moddhe korte chai tahole rules ta airokom oo hote pare: (a / __gcd(a, b)) * b;
    cout << res2 << endl;
    return 0;
}