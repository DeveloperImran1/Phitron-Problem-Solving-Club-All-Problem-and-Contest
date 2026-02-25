#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    pair<string, string> p[n];

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        string tree, color;
        cin >> tree >> color;

        int isChanged = 1;
        for (auto [first, second] : p)
        {
            if (first == tree && second == color)
            {
                isChanged = 0;
            }
        }

        p[i].first = tree;
        p[i].second = color;

        if (isChanged)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}