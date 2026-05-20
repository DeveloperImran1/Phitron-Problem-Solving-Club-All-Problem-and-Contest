#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, n;
    cin >> x >> n;
    vector<int> v(n);
    multiset<int> st;
    multiset<int> ans_st;
    st.insert(0);
    st.insert(x);

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v[i] = val;

        st.insert(val);
        if (i != 0)
        {
            int prev_idx_val = v[i];
            auto current = st.find(prev_idx_val);
            auto next = current;
            auto prev = current;

            if (prev_idx_val != x && prev_idx_val != 0)
            {
                next++;
                prev--;
            }
            else if (prev_idx_val != x && prev_idx_val == 0)
            {
                next++;
            }
            else if (prev_idx_val == x)
            {
                prev--;
            }

            int current_val = *current;
            int prev_val = *prev;
            int next_val = *next;

            int res1 = next_val - prev_val;
            // int res2 = current_val - prev_val;
            // int mx = max(res1, res2);
            auto prev_max = ans_st.find(res1);
            // if (prev_max != ans_st.end())
            // {
            ans_st.erase(prev_max);
            // }

            // for (auto valu : ans_st)
            // {
            //     cout << valu << " ";
            // }
            // cout << prev_val << " " << current_val << " " << next_val << endl;
            // cout << res1 << " " << res2 << " " << *prev_max << endl;
            // cout << endl;
        }

        auto current = st.find(val);
        auto next = current;
        auto prev = current;

        if (val != x && val != 0)
        {
            next++;
            prev--;
        }
        else if (val != x && val == 0)
        {
            next++;
        }
        else if (val == x)
        {
            prev--;
        }

        int current_val = *current;
        int prev_val = *prev;
        int next_val = *next;

        int res1 = next_val - current_val;
        ans_st.insert(res1);

        int res2 = current_val - prev_val;
        ans_st.insert(res2);

        auto final_res = ans_st.rbegin(); // set er last element ke mean kore.
        cout << *final_res << " ";
    }

    return 0;
}