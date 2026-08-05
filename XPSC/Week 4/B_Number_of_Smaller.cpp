#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> v1(n);
    vector<int> v2(m);

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }

    int l = 0, r = 0, count = 0;

    for (int i = 0; r < m; i++)
    {
        if ((l < n) && (v1[l] < v2[r]))
        {
            l++;
            count++;
        }
        else
        {
            cout << count << " ";
            r++;
        }
    }

    return 0;
}
