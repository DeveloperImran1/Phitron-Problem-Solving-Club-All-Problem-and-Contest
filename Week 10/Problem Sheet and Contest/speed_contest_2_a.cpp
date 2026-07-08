#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    // cout << (10000 * n) / k;
    cout << 10000 * (n - k);
    return 0;
}