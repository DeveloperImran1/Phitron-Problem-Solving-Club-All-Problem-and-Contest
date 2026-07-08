#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int need = (n + 1) / 20;
    if ((n + 1) % 20 == 0)
    {
        cout << need;
    }
    else
    {
        cout << need + 1;
    }
    return 0;
}