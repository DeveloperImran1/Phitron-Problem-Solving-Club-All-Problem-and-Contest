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
        int x, y, z;
        cin >> x >> y >> z;
        int my_taka = 0;
        int count = 0;
        while (true)
        {
            if (my_taka >= x)
            {
                break;
            }
            x += y;
            my_taka += z;
            count++;
            if (count > 100)
            {
                count = -1;
                break;
            }
        }

        cout << count << endl;
    }

    return 0;
}