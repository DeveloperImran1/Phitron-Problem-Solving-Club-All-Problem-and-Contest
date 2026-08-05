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
        int n, q;
        cin >> n >> q;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v.push_back(val);
        }

        vector<int> copy_v = v;
        sort(copy_v.begin(), copy_v.end());
        int mex = n;
        for (int j = 0; j < n; j++)
        {
            if (copy_v[j] != j)
            {
                mex = j;
                break;
            }
        }
        v.push_back(mex);

        int shift = q % (n + 1);
        int start_index = (n + 1 - shift) % (n + 1);
        for (int i = 0; i < n; i++)
        {
            cout << v[(start_index + i) % (n + 1)] << " ";
        }
        cout << endl;
    }

    return 0;
}