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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        if (n == 1)
        {
            if (v[0] == 0)
            {
                cout << "Alice" << endl;
            }
            else
            {
                cout << "Bob" << endl;
            }
            continue;
        }

        vector<int> new_v;
        int left = -1, right = -1;
        for (int l = 0, r = n - 1; l <= r; l++, r--)
        {
            if (left == -1 && v[l] == 0)
            {
                left = l;
            }

            if (right == -1 && v[r] == 0)
            {
                right = r;
            }

            if (left == -1)
            {
                new_v.push_back(v[l]);
            }
            if (right == -1)
            {
                new_v.push_back(v[r]);
            }
            if (left != -1 && right != -1)
            {
                break;
            }
        }

        if (left != -1 || right != -1)
        {
            new_v.push_back(1);
        }

        if (new_v.size() == 1)
        {
            if (new_v[0] == 0)
            {
                cout << "Alice" << endl;
            }
            else
            {
                cout << "Bob" << endl;
            }
            continue;
        }

        string ans = "Alice";
        for (int i = 0; i < new_v.size(); i++)
        {
            // cout << new_v[i] << " ";
            if (new_v[i] == 0)
            {
                ans = "Bob";
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}