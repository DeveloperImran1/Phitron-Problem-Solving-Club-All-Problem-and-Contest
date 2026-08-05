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
        int n;
        cin >> n;
        int ans = 1;

        for (int i = 1; i <= n; i++)
        {
            // ans = ans * i; // Normal vabe factorial ber kortesi. Jarfole n er man akto boro holei overflow hobe. long long a rakha possible hobena.
            ans = (1LL * ans % MOD * i % MOD) % MOD; // Akhon thik vabe kaj korbe. Overflow hobena. Ai system kei bole Modular arhithmatic er Multiplication system. Aikhane 1LL korar mane holo multiple korar somoi long long a gete pare.
        }

        cout << ans << endl;
    }

    return 0;
}