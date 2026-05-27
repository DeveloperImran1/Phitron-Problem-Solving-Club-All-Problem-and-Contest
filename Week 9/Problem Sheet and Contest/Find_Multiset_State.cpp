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
        multiset<int> ml;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            ml.insert(val);
        }
        for (int i = 0; i < k; i++)
        {
            auto small = ml.begin();
            auto large = ml.end();
            large--;
            int sum = *small + *large;
            ml.erase(small);
            ml.erase(large);
            ml.insert(sum);
        }

        for (int val : ml)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}