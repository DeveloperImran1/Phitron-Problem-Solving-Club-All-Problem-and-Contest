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
        int n, k;
        cin >> n >> k;
        while (k > n)
        {
            k -= (n + 1);
        }

        cout << k << endl;
    }

    return 0;
}