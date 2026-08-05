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
        for (int i = 0; i < n; i++)
        {
            if (k == 4)
            {
                k = 1;
            }
            else
            {
                k++;
            }
        }

        if (k == 0)
        {
            cout << "On" << endl;
        }
        else if (k == 4)
        {

            cout << "Off" << endl;
        }
        else
        {
            cout << "Ambiguous" << endl;
        }
    }

    return 0;
}