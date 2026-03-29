#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int i = 0, j = 0;
    vector<int> res;

    while (i < n || j < m)
    {
        if (i < n && a[i] <= b[j])
        {
            res.push_back(a[i]);
            i++;
        }

        if (j < m && b[j] <= a[i])
        {
            res.push_back(b[j]);
            j++;
        }

        if (i == n && j < m)
        {
            res.push_back(b[j]);
            j++;
        }
        if (j == m && i < n)
        {
            res.push_back(a[i]);
            i++;
        }
    }

    for (int val : res)
    {
        cout << val << " ";
    }

    return 0;
}