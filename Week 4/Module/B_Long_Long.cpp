

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

        int count = 0;
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                continue;
            }
            else if (v[i] < 0)
            {
                ans.push_back(v[i]);
            }
            else
            {
                if (!ans.empty())
                {
                    count++;
                    ans.clear();
                }
            }
        }

        if (!ans.empty())
        {
            count++;
            ans.clear();
        }

        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += abs(v[i]);
        }

        cout << sum << " " << count << endl;
    }
    return 0;
}