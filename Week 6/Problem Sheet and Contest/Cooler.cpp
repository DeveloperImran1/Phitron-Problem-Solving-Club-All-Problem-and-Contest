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
        int a, b;
        cin >> a >> b;
        long long int res = 0;
        for (int i = a; i > b; i--)
        {
            res += i;
        }

        cout << res << endl;
    }

    return 0;
}