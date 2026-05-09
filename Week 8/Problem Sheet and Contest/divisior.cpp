#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    // Time Complexity --> O(n)
    // for (int i = 1; i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << i << " ";
    //     }
    // }

    // Time Complexity --> O(sqrt N)
    vector<int> v;
    // for (int i = 1; i*i <= n; i++)  // Aikhane i <= sqrt(n) -> ke i*i <= n; diew likhte pari. Karon i*i manei n. So i = sqrt(n)
    for (int i = 1; i <= sqrt(n); i++)
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
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    return 0;
}