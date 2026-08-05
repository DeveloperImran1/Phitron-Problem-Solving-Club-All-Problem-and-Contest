#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0, j = 0, mx = 0, count = arr[0];
    while (j < n)
    {
        mx = max(mx, count);
        if (j - i + 1 == k)
        {
            count -= arr[i];
            i++;
            j++;
            count += arr[j];
        }
        else
        {
            j++;
            count += arr[j];
        }
    }
    cout << mx << endl;

    return 0;
}
