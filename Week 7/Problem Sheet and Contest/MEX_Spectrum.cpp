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
        int arr[n];
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        set<int> st;
        int ans = 0;
        for (int i = 0; i <= n; i++)
        {
            int ans1 = mp[i];

            int ans2 = i - st.size();

            ans = max(ans1, ans2);
            cout << ans << " ";

            if (mp[i])
            {
                st.insert(i);
            }
        }
        cout << endl;
    }

    return 0;
}