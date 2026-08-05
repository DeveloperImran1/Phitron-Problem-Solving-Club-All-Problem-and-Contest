#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    int mid = (n / 2) + 1;
    if (k >= mid)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << mid - k << endl;
    }
    return 0;
}