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
        int n, k;
        cin >> n >> k;

        if (n % 4 != 0)
        {
            cout << "Ambiguous" << endl;
        }
        else if (k == 0)
        {
            cout << "Off" << endl;
        }
        else if (k == 1)
        {
            cout << "On" << endl;
        }
    }

    return 0;
}