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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            a[i] = val;
            b[i] = val;
        }

        sort(b.begin(), b.end());
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                ans.push_back(a[i]);
            }
        }
        if (ans.size() == 0)
        {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}