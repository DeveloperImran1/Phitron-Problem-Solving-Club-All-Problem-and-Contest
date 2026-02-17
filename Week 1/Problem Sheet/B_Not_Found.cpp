#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool arr[26] = {false};
    for (int c : s)
    {
        if (arr[c - 97] == false)
        {
            arr[c - 97] = true;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == false)
        {
            char c = i + 97;
            cout << c << endl;
            return 0;
        }
    }

    cout << "None" << endl;

    return 0;
}