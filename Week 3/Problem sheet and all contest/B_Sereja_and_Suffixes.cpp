#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    set<int> s;
    vector<int> size_v(n + 1);
    for (int i = n, j = 1; i > 0; i--, j++)
    {
        s.insert(v[i]);
        size_v[j] = s.size();
    }
    reverse(size_v.begin() + 1, size_v.end());

    while (m--)
    {
        int val;
        cin >> val;
        cout << size_v[val] << endl;
    }

    return 0;
}