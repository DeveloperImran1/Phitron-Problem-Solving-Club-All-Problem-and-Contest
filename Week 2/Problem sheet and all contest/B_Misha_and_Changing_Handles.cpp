#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, string> ans, has;

    for (int i = 0; i < n; i++)
    {
        string key, value;
        cin >> key >> value;
        if (has.find(key) != has.end())
        {
            string s = has[key];
            ans[s] = value;
            has.erase(key);
            has[value] = s;
        }
        else
        {
            ans[key] = value;
            has[value] = key;
        }
    }

    cout << ans.size() << endl;
    for (auto [key, value] : ans)
    {
        cout << key << " " << value << endl;
    }

    return 0;
}