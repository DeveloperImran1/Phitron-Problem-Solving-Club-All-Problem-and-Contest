#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, p, q, r;
        cin >> a >> b >> p >> q >> r;

        int min_cost = INT_MAX;
        int mn_equal = min(a, b);

        for (int i = 0; i <= mn_equal; i++)
        {
            int cost = i * r;
            int current_a = a - i;
            int cost1 = ((current_a + 1) / 2) * p;

            int current_b = b - i;
            int cost2 = ((current_b + 1) / 2) * q;

            int total_cost = cost + cost1 + cost2;

            min_cost = min(min_cost, total_cost);
        }

        cout << min_cost << endl;
    }

    return 0;
}