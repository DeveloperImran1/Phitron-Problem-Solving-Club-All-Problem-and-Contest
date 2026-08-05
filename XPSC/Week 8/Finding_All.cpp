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
        vector<int> v;
        int negative = 0, zero = 0, positive = 0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (val == -1 && negative < 2)
            {
                v.push_back(val);
                negative++;
            }
            else if (val == 0 && zero < 2)
            {
                v.push_back(val);
                zero++;
            }
            if (val == 1 && positive < 2)
            {
                v.push_back(val);
                positive++;
            }
        }

        sort(v.begin(), v.end());

        set<int> st;
        do
        {
            int x = 0;
            for (int i = 0; i < v.size(); i++)
            {
                if (x < v[i])
                {
                    x = -1;
                }
                else if (x > v[i])
                {
                    x = 1;
                }
                else
                {
                    x = 0;
                }
            }
            st.insert(x);

        } while (next_permutation(v.begin(), v.end()));

        for (auto it : st)
        {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}