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
        string s;
        cin >> s;

        int total_zero = 0, total_one = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                total_zero++;
            }
            else
            {
                total_one++;
            }
        }

        int bad_pair = (n / 2) - k;
        total_zero -= bad_pair;
        total_one -= bad_pair;

        if (total_zero < 0 || total_one < 0)
        {
            cout << "NO" << endl;
            continue;
        }

        int total_pair = (total_zero / 2) + (total_one / 2);
        if (total_pair == k)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}