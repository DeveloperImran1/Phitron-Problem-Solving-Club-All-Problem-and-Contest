#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--)
    {
        string a, b;
        cin >> a >> b;
        for (int i = 0; i < 5; i++)
        {
            if (a[i] == b[i])
            {
                cout << 'G';
            }
            else
            {
                cout << 'B';
            }
        }
        cout << endl;
    }

    return 0;
}