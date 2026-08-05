#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    stack<string> names;
    while (n--)
    {
        string s;
        cin >> s;
        names.push(s);
    }

    map<string, int> printed_names;
    while (!names.empty())
    {
        string name = names.top();
        if (!printed_names.empty())
        {
            auto value = printed_names[name];
            if (value >= 1)
            {
                printed_names[name] = -1;
            }
            else if (value != -1)
            {
                cout << name << endl;
                printed_names[name]++;
            }
        }
        else
        {
            cout << name << endl;
            printed_names[name]++;
        }

        names.pop();
    }

    return 0;
}