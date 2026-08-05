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

        for (int i = 0; i < q; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            if (a == 1)
            {
                v[b - 1] = c;
            }
            else if (a == 2)
            {
                int l = b;
                int r = c;
                l--, r--;
                if (l == r)
                {
                    cout << v[l] << endl;
                    continue;
                }

                int sz = r - l + 1;
                if (sz % 2 == 1)
                {
                    // odd size -> Middle er 3ta
                    int mid = l + (sz / 2);
                    int midR = mid + 1;
                    int midL = mid - 1;

                    int val_1 = min(v[midL], v[mid]);
                    int val_2 = min(v[mid], v[midR]);
                    cout << max(val_1, val_2) << endl;
                }
                else
                {
                    // even size -> Middle er 2ta
                    int midR = l + (sz / 2);
                    int midL = midR - 1;
                    cout << max(v[midR], v[midL]) << endl;
                }
            }
        }
    }

    return 0;
}