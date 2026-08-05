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
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < n - 1; i++)
        {

            if (v[i] > v[i + 1])
            {
                int total = v[i] + v[i + 1];
                int half = total / 2;
                v[i] = half;
                v[i + 1] = total - half;
                i++;
            }
        }
        int is_posible = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                is_posible = 0;
                break;
            }
        }
        if (is_posible)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}