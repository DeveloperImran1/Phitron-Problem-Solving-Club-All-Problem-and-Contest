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
        vector<int> v(5);
        for (int i = 0; i < 5; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), greater<int>());

        if (v[0] >= 60 && v[1] >= 60 && v[2] >= 30 && v[3] >= 30)
        {
            cout << "Pass" << endl;
        }
        else
        {
            cout << "Fail" << endl;
        }
    }

    return 0;
}