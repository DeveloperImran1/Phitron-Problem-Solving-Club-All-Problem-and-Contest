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
        if (n <= 20)
        {
            cout << n * 10 << endl;
        }
        else
        {
            int first = 20 * 10;
            int last = (n - 20) / 2;
            int last_total = last * 5;
            cout << first + last_total << endl;
        }
    }

    return 0;
}