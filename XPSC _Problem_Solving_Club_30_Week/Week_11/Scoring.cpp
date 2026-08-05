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
        int x, y;
        cin >> x >> y;
        int alise = (y - x) / 2;
        int bob = alise + x;
        cout << bob << " " << alise << endl;
    }

    return 0;
}