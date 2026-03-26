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
        if ((n % 2 == 0 && n % 5 != 0) || (n % 2 != 0 && n % 5 == 0))
        {
            cout << 0 << endl;
            continue;
        }
        int l = n - 1, r = n + 1;
        int imperfect = 0;
        while (!imperfect)
        {
            if (l > 0)
            {
                if ((l % 2 == 0 && l % 5 != 0) || (l % 2 != 0 && l % 5 == 0))
                {
                    imperfect = n - l;
                    cout << imperfect << endl;
                    break;
                }
                l--;
            }
            if (r <= 100)
            {
                if ((r % 2 == 0 && r % 5 != 0) || (r % 2 != 0 && r % 5 == 0))
                {
                    imperfect = r - n;
                    cout << imperfect << endl;
                    break;
                }
                r++;
            }
        }
    }

    return 0;
}