#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int l = 0, r = 0;
    queue<int> q;
    vector<int> res;
    while (r < arr.size())
    {
        if (arr[r] < 0)
        {
            q.push(arr[r]);
        }

        if (r - l + 1 == k)
        {
            if (!q.empty())
            {
                res.push_back(q.front());
                if (arr[l] == q.front())
                {
                    q.pop();
                }
            }
            else
            {
                res.push_back(0);
            }
            l++, r++;
        }
        else
        {
            r++;
        }
    }

    for (int res : res)
    {
        cout << res << " ";
    }

    return 0;
}