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
        int n, k;
        cin >> n >> k;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        set<int> st;

        for (int i = 0; i < n; i++)
        {
            int total = 0;
            int idx = 0;
            for (int j = 0; j < k; j++)
            {
                if (v[i][j] == '1')
                {
                    total++;
                    idx = j;
                }
            }
            if (total == 1)
            {
                st.insert(idx);
            }
        }

        if (st.size() < k)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
