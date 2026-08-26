#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int first_num = n / 10;
    cout << (first_num + 1) * 10 - n;
    return 0;
}