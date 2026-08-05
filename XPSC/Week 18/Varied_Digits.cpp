#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a = n / 10;
    int b = n % 10;
    if (a == b)
    {
        cout << "No";
    }
    else
    {

        cout << "Yes";
    }
    return 0;
}