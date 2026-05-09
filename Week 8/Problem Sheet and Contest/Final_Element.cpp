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
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v.push_back(val);
        }

        int k = 1000;
        while (k--)
        {
            vector<int> b;
            for (int i = 0; i < n - 1; i++)
            {
                int val = v[i] ^ v[i + 1];
                b.push_back(val);
            }

             if (b.size() == 1)
            {
                cout << b[0] << endl;
                break;
            }
            else
            {
                v = b;
                b.clear();
            }
            n--;
        }
    }

    return 0;
}