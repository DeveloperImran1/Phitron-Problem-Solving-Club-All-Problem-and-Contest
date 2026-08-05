#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    vector<int> asci(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        int idx = s[i] - 65;
        asci[idx]++;
    }

    int s_size = s.size();
    vector<char> v(s_size);
    int odd = 0;
    for (int i = 0; i < 26; i++)
    {
        if (asci[i] % 2 == 1)
        {
            odd++;
        }
        if (odd == 2)
        {
            cout << "NO SOLUTION" << endl;
            return 0;
        }
    }

    int m = 0, n = s_size - 1;
    for (int i = 0; i < 26; i++)
    {

        if (asci[i] > 1 && asci[i] % 2 != 1)
        {
            for (; asci[i] > 0; m++, n--)
            {
                char c = i + 65;
                v[m] = c;
                v[n] = c;
                asci[i] -= 2;
            }
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (asci[i] % 2 == 1)
        {
            for (; asci[i] > 0; m++)
            {
                char c = i + 65;
                v[m] = c;
                asci[i]--;
            }
        }
    }

    for (int i = 0; i < s_size; i++)
    {
        cout << v[i];
    }

    return 0;
}