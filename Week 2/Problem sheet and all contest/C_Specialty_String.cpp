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
        string s;
        cin >> s;

        vector<char> v(n);
        for (int i = 0; i < n; i++)
        {
            v[i] = s[i];
        }

        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout << v[i];
        // }
        // cout << endl;

        int count = 0;
        while (1)
        {

            for (int i = 0; i < v.size() - 1 && v.size() > 1; i++)
            {

                if (v[i] == v[i + 1])
                {
                    v.erase(v.begin() + i);
                    v.erase(v.begin() + i);
                    break;
                }
            }
            count++;
            if (count > 10000)
            {
                break;
            }
        }

        if (!v.empty())
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}