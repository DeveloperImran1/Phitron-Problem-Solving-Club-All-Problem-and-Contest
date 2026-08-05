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
        if (n == 0 && k == 0)
        {
            cout << "Off" << endl;
        }
        else if (n == 0 && k == 1)
        {
            cout << "On" << endl;
        }
        else if ((n % 4) == 0 && k == 0)
        {
            cout << "Off" << endl;
        }
        else if (((n % 4) == 1 || (n % 4) == 2 || (n % 4) == 3) && k == 0)
        {
            cout << "On" << endl;
        }
        else if ((n % 4) == 0 && k == 1)
        {
            cout << "On" << endl;
        }
        else if (((n % 4) == 1 || (n % 4) == 2 || (n % 4) == 3) && k == 1)
        {
            cout << "Ambiguous" << endl;
        }
    }

    return 0;
}