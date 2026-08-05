#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    // pair array declare and value input with fixed size
    pair<string, int> students[n];
    for (int i = 0; i < n; i++)
    {
        cin >> students[i].first >> students[i].second;
    }

    // pair ke loop chalie a value print.
    // for (int i = 0; i < n; i++)
    // {
    //     cout << students[i].first << " " << students[i].second << '\n';
    // }

    // Aikhane for loop er maddhome students array er akta akta kore element ke access kortesi and auto keyword er maddhome firsr and last value ke x, y er moddhe rakhtesi. Jeheto auto keyword use kortesi. Tai c++ version 17 ba tar uporer hote hobe.
    for (auto [x, y] : students)
    {
        cout << x << " " << y << '\n';
    }

    return 0;
}