#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int l, r;
    cin >> l >> r;
    vector<long long int> v;
    long long int count = 0;

    for (long long int i = l; i < r; i += 2)
    {
        if (i == l)
        {
            cout << "YES" << endl;
        }
        cout << i << " " << i + 1 << endl;
    }

    if (l == r)
    {
        cout << "NO" << endl;
    }

    return 0;
}