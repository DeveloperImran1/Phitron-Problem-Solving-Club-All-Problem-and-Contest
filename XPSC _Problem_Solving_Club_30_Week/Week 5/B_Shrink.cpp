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
        vector<int> v;
        int l = 2, r = n, count = 1;
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                v.push_back(1);
                break;
            }
            if (count)
            {
                v.push_back(l);
                l++;
                if (count == 2)
                {
                    count = 0;
                }
                else
                {
                    count++;
                }
            }
            else
            {
                v.push_back(r);
                r--;
                count++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}