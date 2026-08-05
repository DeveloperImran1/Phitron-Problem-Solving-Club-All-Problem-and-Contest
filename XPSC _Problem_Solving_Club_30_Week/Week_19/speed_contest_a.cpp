#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    int price_a = a * 5000;
    int price_b = b * 9800;
    cout << price_a + price_b;
    return 0;
}