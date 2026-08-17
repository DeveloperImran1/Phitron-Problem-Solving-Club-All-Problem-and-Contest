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

        vector<string> total_block;
        string new_str = "";
        new_str.push_back(s[0]);

        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                new_str.push_back(s[i]);
            }
            else
            {
                total_block.push_back(new_str);
                new_str = "";
                new_str.push_back(s[i]);
            }
        }
        total_block.push_back(new_str);

        if (total_block.size() == 1)
        {
            cout << total_block[0] << endl;
            continue;
        }

        string res = total_block[0] + total_block[1];

        for (int i = 1; i < total_block.size() - 1; i++)
        {
            string frist_blocks = total_block[i] + total_block[i + 1];
            if (frist_blocks < res)
            {
                res = frist_blocks;
            }
        }

        cout << res << endl;
    }

    return 0;
}