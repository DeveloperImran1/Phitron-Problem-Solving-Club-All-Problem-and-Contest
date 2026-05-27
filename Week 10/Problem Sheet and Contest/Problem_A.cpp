#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a % b == 0 || b % a == 0)
        {
            cout << "Finite" << endl;
        }
        else
        {
            cout << "Infinite" << endl;
        }
    }

    return 0;
}