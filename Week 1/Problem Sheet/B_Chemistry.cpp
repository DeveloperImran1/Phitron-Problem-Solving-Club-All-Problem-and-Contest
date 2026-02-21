#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string word;
        cin >> word;

        int asci[27] = {0};
        for (int c : word)
        {
            asci[c - 97]++;
        }

        if (k == 0)
        {
            int count = 0;
            for (int i = 0; i < 27; i++)
            {
                if (asci[i] % 2 != 0)
                {
                    count++;
                }
            }
            if (count > 1)
            {
                cout << "NO" << endl;
                continue;
            }
            else
            {
                cout << "YES" << endl;
                continue;
            }
        }
        else
        {
            for (int i = 0; i < 27 && k > 0; i++)
            {
                if (asci[i] % 2 == 1)
                {
                    asci[i]--;
                    k--;
                }
            }
            for (int i = 0; i < 27 && k > 0; i++)
            {
                if (asci[i] % 2 == 0)
                {
                    asci[i]--;
                    k--;

                    if (k > 0)
                    {
                        asci[i]--;
                        k--;
                    }
                }
            }

            int count = 0;
            for (int i = 0; i < 27; i++)
            {
                if (asci[i] % 2 != 0)
                {
                    count++;
                }
            }
            if (count > 1)
            {
                cout << "NO" << endl;
                continue;
            }
            else
            {
                cout << "YES" << endl;
                continue;
            }
        }
        // cout << endl;
    }

    return 0;
}