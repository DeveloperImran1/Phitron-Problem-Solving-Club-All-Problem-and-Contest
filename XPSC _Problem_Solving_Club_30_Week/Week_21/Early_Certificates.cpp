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
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        for (int i = 0; i < min(n, m); i++)
        {
            if (a[i] == b[i])
            {
                cout << a[i];
            }
            else
            {
                break;
            }
        }
        cout << endl;
    }

    return 0;
}