#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n, k;
    cin >> n >> k;
    if (n < k)
    {
        cout << -1 << endl;
        return 0;
    }

    vector<long long int> v;
    for (long long int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (n / i != i)
            {
                v.push_back(n / i);
            }
        }
    }

    sort(v.begin(), v.end());

    if (v.size() >= k)
    {
        cout << v[k - 1];
    }
    else
    {
        cout << -1;
    }

    return 0;
}