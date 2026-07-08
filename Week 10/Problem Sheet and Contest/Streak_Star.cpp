#include <bits/stdc++.h>
using namespace std;

int ans = 0;
void get_longest_streak(vector<int> copy_v)
{
    int count = 0;
    for (int i = 0; i < copy_v.size(); i++)
    {
        if (i == 0)
        {
            count++;
            continue;
        }

        if (copy_v[i] >= copy_v[i - 1])
        {
            count++;
            ans = max(ans, count);
        }
        else if (copy_v[i] < copy_v[i - 1])
        {
            ans = max(ans, count);
            count = 1;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ans = 0;
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        get_longest_streak(v);
        for (int i = 1; i < n; i++)
        {
            if (v[i] < v[i - 1])
            {
                int current_val = v[i];
                v[i] = v[i] * x;
                get_longest_streak(v);
                v[i] = current_val;
            }
        }
        cout << ans << endl;
    }

    return 0;
}