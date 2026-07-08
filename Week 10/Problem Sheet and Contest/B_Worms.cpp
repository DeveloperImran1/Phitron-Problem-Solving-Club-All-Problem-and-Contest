#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

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

    int q;
    cin >> q;
    while (q--)
    {
        int key;
        cin >> key;

        int l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (pre[mid] < key)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        if (l == n)
        {
            cout << l << endl;
        }
        else
        {
            cout << l + 1 << endl;
        }
    }

    return 0;
}