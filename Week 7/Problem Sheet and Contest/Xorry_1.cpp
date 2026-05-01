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
        int n;
        cin >> n;

        int x = 1;

        while (x * 2 <= n)
        {
            x = x * 2;
        }

        cout << n - x << " " << x << endl;
    }

    return 0;
}