#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    if (n >= 5)
    {
        cout << n * 85 << endl;
    }
    else
    {
        cout << n * 100 << endl;
    }
    return 0;
}