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
        map<int, int> mp;
        for (int i = 1; i <= n; i++)
        {
            int val;
            cin >> val;
            mp[val]++;
        }

        priority_queue<int> pq;
        for (auto [key, value] : mp)
        {
            pq.push(value);
            // cout << key << " " << value << endl;
        }

        while (!pq.empty())
        {
            if (pq.size() < 2)
            {
                break;
            }
            int first = pq.top();
            pq.pop();
            int second = pq.top();
            pq.pop();
            first--, second--;

            if (first >= 1)
            {
                pq.push(first);
            }
            if (second >= 1)
            {
                pq.push(second);
            }
        }

        int ans = 0;
        while (!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
        cout << ans << endl;
    }

    return 0;
}