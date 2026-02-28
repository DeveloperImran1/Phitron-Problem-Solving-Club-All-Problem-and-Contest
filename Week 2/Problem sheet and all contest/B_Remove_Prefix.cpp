
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
        vector<int> nums(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> nums[i];
        }

        vector<int> v(n + 1, 0);
        int count = 0;
        for (int i = n; i >= 1; i--)
        {
            v[nums[i]]++;
            int current_val = v[nums[i]];
            if (current_val >= 2)
            {

                break;
            }
            else
            {
                count++;
            }
        }
        cout << n - count << endl;
    }
    return 0;
}