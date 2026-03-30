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

        int is_palindrome = 1;
        for (int i = 0, j = n - 1; i <= j; i++, j--)
        {
            if (s[i] != s[j])
            {
                is_palindrome = 0;
            }
        }
        if (is_palindrome)
        {
            cout << 0 << endl;
            continue;
        }

        vector<int> res;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                res.push_back(i + 1);
            }
        }

        if (res.empty())
        {
            for (int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
        }
        else
        {
            cout << res.size() << endl;
            for (int val : res)
            {
                cout << val << " ";
            }
        }
        cout << endl;
    }
    return 0;
}