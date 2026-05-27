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
        sort(v.begin(), v.end());
        // int l = 0;
        // int r = n - 1;
        // int operation = 2;
        // while (operation--)
        // {
        // int a = v[l + 2] - v[l];
        // int b = v[r] - v[r - 2];
        // if (a >= b)
        // {
        //     l += 2;
        // }
        // else
        // {
        //     r -= 2;
        // }
        // // }
        // cout << v[r] - v[l] << endl;

        vector<int> ans_v;
        ans_v.push_back(v[n - 1] - v[0]);
        ans_v.push_back(v[n - 2] - v[0]);
        ans_v.push_back(v[n - 1] - v[1]);
        ans_v.push_back(v[n - 3] - v[0]);
        ans_v.push_back(v[n - 1] - v[2]);
        ans_v.push_back(v[n - 2] - v[1]);

        sort(ans_v.begin(), ans_v.end());
        cout << ans_v[0] << endl;
    }

    return 0;
}