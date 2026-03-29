#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string txt, pat;
    cin >> txt >> pat;
    int text_size = txt.size();
    int pat_size = pat.size();

    map<char, int> pat_mp;
    for (char c : pat)
    {
        pat_mp[c]++;
    }
    // for (auto [key, value] : pat_mp)
    // {
    //     cout << key << " " << value << endl;
    // }

    map<char, int> mp;
    int i = 0, j = 0, count = 0;

    while (j < text_size)
    {
        mp[txt[j]]++;
        if (j - i + 1 == pat_size)
        {
            // for (auto [key, value] : mp)
            // {
            //     cout << key << " " << value << endl;
            // }
            // cout << endl;
            if (pat_mp == mp)
            {
                count++;
            }
            mp[txt[i]]--;
            if (mp[txt[i]] == 0)
            {
                mp.erase(txt[i]);
            }
            i++, j++;
        }
        else
        {
            j++;
        }
    }
    cout << count;

    return 0;
}