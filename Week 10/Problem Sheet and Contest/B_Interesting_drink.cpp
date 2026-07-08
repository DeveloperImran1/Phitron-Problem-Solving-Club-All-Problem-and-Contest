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

    sort(v.begin(), v.end());
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
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
            if (v[mid] <= key)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        cout << l << endl;
    }

    return 0;
}