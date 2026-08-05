#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v[i] = val;
        }

        int is_posible = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 67)
            {
                is_posible = 1;
                break;
            }
        }

        is_posible ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}