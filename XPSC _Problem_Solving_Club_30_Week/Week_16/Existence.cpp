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
        long long int x, y;
        cin >> x >> y;
        long long int tow = 2;
        long long int four = 4;

        // long long int left = pow(x, four) + (four * pow(y, tow));
        // long long int right = (four * pow(x, tow) * y);
        long long int right = (x * x) - y;
        long long int right_side = four * y * right;
        long long int left_side = x * x * x * x;

        if (left_side == right_side)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}