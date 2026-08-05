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
        int n, price;
        cin >> n >> price;
        vector<int> w(n);
        vector<int> h(n);
        vector<int> p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
            cin >> h[i];
            cin >> p[i];
        }

        int is_posible = 0;
        int mx_area = 0;
        for (int i = 0; i < n; i++)
        {
            if (p[i] <= price)
            {
                is_posible = 1;
                mx_area = max(mx_area, (w[i] * h[i]));
            }
        }

        if (is_posible == 0)
        {
            cout << "no tablet" << endl;
        }
        else
        {
            cout << mx_area << endl;
        }
    }

    return 0;
}