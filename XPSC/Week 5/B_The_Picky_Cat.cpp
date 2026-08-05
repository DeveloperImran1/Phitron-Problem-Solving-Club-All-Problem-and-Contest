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

        multiset<int> ml;
        for (int i = 0; i < n; i++)
        {
            ml.insert(abs(v[i]));
        }

        int first_val = abs(v[0]);
        float target_pos = ceil((float)n / 2);
        int is_exist = 0;
        int count = 0;
        // cout << first_val << " " << target_pos << endl;
        for (auto val : ml)
        {
            // cout << val << " ";
            if (val == first_val)
            {
                is_exist = 1;
            }
            if (is_exist)
            {
                count++;
            }
        }

        // cout << endl;

        if (count >= target_pos)
        {

            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}