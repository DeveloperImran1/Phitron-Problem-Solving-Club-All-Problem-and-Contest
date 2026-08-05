#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int total_minutes = n * k;
        int hour = total_minutes / 60;
        int minute = total_minutes % 60;

        cout << hour << " " << minute << endl;
    }

    return 0;
}