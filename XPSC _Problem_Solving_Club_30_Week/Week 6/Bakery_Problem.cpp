#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    int a = n * 100;
    int b = (n * 60) + k;

    cout << min(a, b) << endl;

    return 0;
}