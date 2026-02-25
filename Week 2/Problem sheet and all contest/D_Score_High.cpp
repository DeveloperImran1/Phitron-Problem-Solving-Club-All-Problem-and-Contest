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
        int n;
        cin >> n;
        vector<int> v(4);
        for (int i = 0; i < 4; i++)
        {
            cin >> v[i];
        }

        auto mx = max_element(v.begin(), v.end());
        // for (int i = 0; i < 4; i++)
        // {
        //     cout << v[i] << " ";
        // }
        cout << *mx << endl;
    }

    return 0;
}