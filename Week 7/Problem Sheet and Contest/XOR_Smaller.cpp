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

        int andd = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (i == 0)
            {
                andd = v[i];
            }
            else
            {
                andd = andd & v[i];
            }
        }

        cout << andd << endl;
    }

    return 0;
}