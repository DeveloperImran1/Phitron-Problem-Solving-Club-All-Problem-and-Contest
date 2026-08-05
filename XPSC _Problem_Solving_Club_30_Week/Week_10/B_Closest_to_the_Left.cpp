#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    while (q--)
    {
        int key;
        cin >> key;
        int l = 0, r = n - 1, ans = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (key >= v[mid])
            {
                ans = mid + 1;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}