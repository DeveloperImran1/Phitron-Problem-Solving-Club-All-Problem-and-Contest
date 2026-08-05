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

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<int> first_v;
        vector<int> second_v;
        int is_done = 0;
        first_v.push_back(v[0]);
        for (int i = 1; i < n; i++)
        {
            if (v[i] >= v[i - 1] && is_done == 0)
            {
                first_v.push_back(v[i]);
            }
            else
            {
                is_done = 1;
                second_v.push_back(v[i]);
            }
        }

        if (is_done == 0)
        {
            cout << "Yes" << endl;
            continue;
        }

        int is_sorted = 1;
        for (int i = 1; i < second_v.size(); i++)
        {
            if (second_v[i] < second_v[i - 1])
            {
                is_sorted = 0;
                break;
            }
        }
        if (is_sorted == 0)
        {
            cout << "No" << endl;

            continue;
        }

        if (second_v[second_v.size() - 1] > first_v[0])
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }

    return 0;
}