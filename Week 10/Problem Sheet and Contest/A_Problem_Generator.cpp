#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        string s;
        cin >> s;

        int arr[7] = {0};
        int count = 0;

        for (int c : s)
        {
            int asci = c - 65;
            if (arr[asci] < n)
            {

                arr[asci]++;
                count++;
            }
        }

        cout << (7 * n) - count << endl;
    }

    return 0;
}