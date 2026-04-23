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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<char> s;
        vector<pair<char, int>> p_arr;
        char current_char = 'a';
        for (int i = 0; i < n; i++)
        {

            if (v[i] == 0)
            {
                s.push_back(current_char);
                pair<char, int> p;
                p = {current_char, 1};
                p_arr.push_back(p);
                current_char++;
            }
            else
            {
                int idx = 0;
                for (auto [key, val] : p_arr)
                {
                    if (val == v[i])
                    {
                        s.push_back(key);
                        p_arr[idx].second = p_arr[idx].second + 1;
                        break;
                    }

                    idx++;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << s[i];
        }
        cout << endl;
    }

    return 0;
}