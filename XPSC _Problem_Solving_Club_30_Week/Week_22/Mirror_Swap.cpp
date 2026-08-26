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
        for (int i = 0; i < n * 2; i++)
        {
            cin >> v[i];
        }
        for (int i = 0, j = 2 * n - 1; i < n; i++, j--)
        {
            if (v[i] < v[j])
            {
                swap(v[i], v[j]);
            }
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += v[i];
        }

        cout << sum << endl;
    }

    return 0;
}