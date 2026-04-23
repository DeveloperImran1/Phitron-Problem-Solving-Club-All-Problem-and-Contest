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
        vector<int> v1(n);
        vector<int> v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
            cin >> v2[i];
        }

        int y = 500;
        for (int i = 0; i < n; i++)
        {
            if (y < v1[i])
            {
                y = v1[i];
            }
            else if (y > v2[i])
            {
                y = v2[i];
            }
        }
        cout << y << endl;
    }

    return 0;
}