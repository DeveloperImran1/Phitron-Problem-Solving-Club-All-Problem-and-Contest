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
        vector<int> v;
        int sum = 0;
        int res = 0;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (val >= 0)
            {
                sum += val;
                res++;
            }
            else
            {
                v.push_back(val);
            }
        }

        sort(v.begin(), v.end());
        for (int i = v.size() - 1; i >= 0; i--)
        {
            // cout << v[i] << " ";
            sum = sum + v[i];
            if (sum >= 0)
            {
                res++;
            }
            else
            {
                break;
            }
        }
        cout << res << endl;
    }

    return 0;
}