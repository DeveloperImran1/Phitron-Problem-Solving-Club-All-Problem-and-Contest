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

        for (int i = 1; i * i <= n; i++)
        {

            if (n % i == 0)
            {

                int a = n / i;
                int b = i;
                if (((a - b) & b) == 0)
                {
                    cout << a << " " << a - b << endl;
                    break;
                }
            }
        }
    }

    return 0;
}