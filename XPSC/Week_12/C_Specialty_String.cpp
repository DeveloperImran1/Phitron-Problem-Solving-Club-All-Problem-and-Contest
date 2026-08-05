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
        stack<char> st;
        for (char c : s)
        {
            if (st.empty())
            {
                st.push(c);
            }
            else
            {
                if (st.top() == c)
                {
                    st.pop();
                }
                else
                {
                    st.push(c);
                }
            }
        }

        if (st.size() > 0)
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