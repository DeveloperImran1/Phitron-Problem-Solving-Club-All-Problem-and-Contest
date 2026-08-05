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
        int l = 0, r = n - 1, is_exist = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (v[mid] == key)
            {
                is_exist = 1;
                break;
            }

            if (v[mid] > key)
            {
                r = mid - 1;
            }
            else if (v[mid] < key)
            {
                l = mid + 1;
            }
        }

        if (is_exist)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}