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
        vector<int> last_occour(n + 1, -1);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            last_occour[v[i]] = i;
        }

        vector<int> first_seen(n + 1, -1);
        vector<int> current_freq(n + 1, 0);
        vector<int> current_elements;

        int ans = 1;
        int l = 0;
        int target_total = 0;
        int matched = 0;
        int min_last = n + 5;
        int distinct_so_far = 0;

        for (int r = 0; r <= n - 2; r++)
        {
            int x = v[r];
            if (first_seen[x] == -1)
            {
                first_seen[x] = r;
                distinct_so_far++;
            }

            min_last = min(min_last, last_occour[x]);

            current_freq[x]++;
            current_elements.push_back(x);

            if (current_freq[x] == 1 && first_seen[x] < l)
            {
                matched++;
            }

            if (matched == target_total && min_last > r)
            {
                ans++;
                l = r + 1;
                target_total = distinct_so_far;
                for (int y : current_elements)
                {
                    current_freq[y] = 0;
                }
                current_elements.clear();
                matched = 0;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}