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
        int low = v[0];
        int high = v[n - 1];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > low && v[i] < high)
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}