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
        long long int a, b;
        cin >> a >> b;
        if (b == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        long long int n = a * b;
        cout << "YES" << endl;
        cout << a << " " << n << " " << n + a << endl;

        // int is_done = 0;
        // for (int z = n; z < 10000; z += n)
        // {
        //     for (int x = a; x <= z; x += a)
        //     {
        //         if ((z - x) % a == 0)
        //         {
        //             cout << "YES" << endl;
        //             cout << x << " " << (z - x) << " " << z << endl;
        //             is_done = 1;
        //             break;
        //         }
        //     }
        //     if (is_done)
        //     {
        //         break;
        //     }
        // }
    }

    return 0;
}