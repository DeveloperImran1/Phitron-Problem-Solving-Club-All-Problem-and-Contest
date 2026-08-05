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
        int m = n;
        vector<int> v;

        long long int total = 0;
        while (n > 0)
        {
            double d = n % 2;
            total += d;
            n = n / 2;
        }

        if (total % 2 == 0)
        {
            cout << "EVEN" << endl;
        }
        else
        {
            cout << "ODD" << endl;
        }
    }

    return 0;
}