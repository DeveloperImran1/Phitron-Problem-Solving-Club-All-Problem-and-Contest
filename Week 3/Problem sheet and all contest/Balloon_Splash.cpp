#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << "Alice";
    }
    else if (a < b)
    {
        cout << "Bob";
    }
    if (a == b)
    {
        cout << "Draw";
    }
    return 0;
}