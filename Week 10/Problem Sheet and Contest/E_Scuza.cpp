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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<int> modify_v(n);
        int current = v[0];
        for (int i = 0; i < n; i++)
        {
            if (v[i] > current)
            {
                current = v[i];
                modify_v[i] = current;
            }
            else
            {
                modify_v[i] = current;
            }
        }

        // for (int i = 0; i < n; i++)
        // {
        //     cout << modify_v[i] << " ";
        // }

        vector<long long int> pre(n);
        pre[0] = v[0];
        for (int i = 1; i < n; i++)
        {
            pre[i] = pre[i - 1] + v[i];
        }

        // for (int i = 0; i < n; i++)
        // {
        //     cout << pre[i] << " ";
        // }

        while (q--)
        {
            int key;
            cin >> key;

            if (key == 0)
            {
                cout << 0 << " ";
                continue;
            }

            int l = 0, r = n - 1;
            while (l <= r)
            {
                int mid = (l + r) / 2;
                if (modify_v[mid] <= key)
                {
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }

            if (l == 0)
            {
                cout << 0 << " ";
            }
            else
            {
                cout << pre[l - 1] << " ";
            }
        }

        cout << endl;
    }

    return 0;
}