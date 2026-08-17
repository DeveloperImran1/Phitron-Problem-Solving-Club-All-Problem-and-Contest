#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    int is_posible = 0;
    for (int i = a; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            is_posible = 1;
        }
    }
    if (is_posible)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}