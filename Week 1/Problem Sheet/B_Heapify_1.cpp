#include <bits/stdc++.h>
using namespace std;

int N = 2e5;
vector<int> group(N, -1);

void percompute()
{
    int grp = 1;
    for (int i = 1; i <= N; i++)
    {
        if (group[i] == -1)
        {
            for (int j = i; j <= N; j = 2 * j)
            {
                group[j] = grp;
            }
            grp++;
        }
    }
};

int main()
{
    percompute();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }

        bool res = true;
        for (int i = 1; i <= n; i++)
        {
            if (group[i] != group[v[i]])
            {
                res = false;
            }
        }

        res ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}
