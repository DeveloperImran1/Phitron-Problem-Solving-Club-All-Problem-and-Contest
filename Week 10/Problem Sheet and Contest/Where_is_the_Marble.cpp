#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int count = 1;
    while (1)
    {
        int n, q;
        cin >> n >> q;
        if (n == 0 && q == 0)
        {
            break;
        }
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        cout << "CASE# " << count << ":" << endl;

        while (q--)
        {
            int key;
            cin >> key;
            auto it = find(v.begin(), v.end(), key);
            if (it == v.end())
            {
                cout << key << " not found" << endl;
            }
            else
            {

                cout << key << " found at " << (it - v.begin()) + 1 << endl;
            }
        }

        count++;
    }

    return 0;
}