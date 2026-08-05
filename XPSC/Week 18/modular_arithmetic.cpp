#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // aivabe long long int er 2ta value multiple korle res long long a rakha posible na. Tai uporer code nicher niom a likhte pari.
    //  1. (a*b) % mod;
    // ⇒ (a%mod * b%mod) % mod;  // Uporer line ke aivabew likhte pari.

    // 2. (a - b) % mod;
    //  ⇒ (a%mod - b%mod) % mod;

    // 2. (a * b * c) % mod;
    //  ⇒ (((a%mod * b%mod) % mod) * c%mod) % mod;

    // Uporer line ke amra ar akto vange aivabew likhte pari.
    //  ⇒ res = ((a%mod * b%mod) % mod);
    //    ans = (res * c%mod) % mod;
    return 0;
}