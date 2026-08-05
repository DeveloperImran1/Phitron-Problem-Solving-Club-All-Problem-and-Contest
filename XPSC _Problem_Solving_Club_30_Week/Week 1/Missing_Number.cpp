#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> v[i];
    }

    vector<int> freq(n + 1, 0);
    for (int i = 0; i < n - 1; i++)
    {
        freq[v[i]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (freq[i] == 0)
        {
            cout << i;
        }
    }

    return 0;
}