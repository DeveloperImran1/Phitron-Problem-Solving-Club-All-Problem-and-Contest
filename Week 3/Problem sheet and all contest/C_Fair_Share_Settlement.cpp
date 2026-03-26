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
        int taka, k;
        cin >> taka >> k;
        int total = taka / (k + 1);

        cout << taka - (total * k) << endl;
    }

    return 0;
}