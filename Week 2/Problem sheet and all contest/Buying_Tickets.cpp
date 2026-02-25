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
        vector<int> price(n);
        for (int i = 0; i < n; i++)
        {
            cin >> price[i];
        }

        string s;
        cin >> s;
        int available = 0;
        for (char c : s)
        {
            if (c == '0')
            {
                available++;
            }
        }

        if (available < k)
        {
            cout << "-1" << endl;
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (price[i] > price[j])
                {
                    swap(price[i], price[j]);
                    swap(s[i], s[j]);
                }
            }
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << s[i] << " " << price[i] << endl;
        // }

        long long int total_taka = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0' && k)
            {
                total_taka += price[i];
                k--;
            }
        }

        cout << total_taka << endl;
    }

    return 0;
}