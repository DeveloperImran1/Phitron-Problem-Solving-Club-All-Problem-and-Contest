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
        float a, b;
        cin >> a >> b;
        float res_a = a / (10 * 10);
        float res_b = b / (15 * 15);
        if (res_a < res_b)
        {
            cout << "Small" << endl;
        }
        else if (res_b < res_a)
        {
            cout << "Large" << endl;
        }
        else
        {
            cout << "Equal" << endl;
        }
    }

    return 0;
}