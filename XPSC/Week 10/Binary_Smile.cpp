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
        string a, b;
        cin >> a >> b;

        vector<int> one_pos_a;
        vector<int> one_pos_b;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
            {
                one_pos_a.push_back(i);
            }
            if (b[i] == '1')
            {
                one_pos_b.push_back(i);
            }
        }

        if (one_pos_a.size() != one_pos_b.size())
        {
            cout << -1 << endl;
            continue;
        }

        int ans = 0;

        for (int i = 0; i < one_pos_a.size(); i++)
        {
            if (one_pos_a[i] != one_pos_b[i])
            {
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}