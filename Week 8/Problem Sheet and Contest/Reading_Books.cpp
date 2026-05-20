#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long int> v(n);
    long long int total_sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        total_sum += v[i];
    }

    sort(v.begin(), v.end());
    long long int large_elem = v[n - 1];
    long long int without_large_total = total_sum - (v[n - 1]);

    long long int ans = total_sum;
    if (large_elem > without_large_total)
    {
        ans = total_sum + (large_elem - without_large_total);
    }
    cout << ans << endl;

    return 0;
}