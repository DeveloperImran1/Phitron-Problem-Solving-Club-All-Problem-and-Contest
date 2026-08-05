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
        pair<int, int> movie[n];

        for (int i = 0; i < n; i++)
        {
            int rating, price;
            cin >> rating >> price;
            movie[i].first = rating;
            movie[i].second = price;
        }

        int result = -1;
        for (int i = 0; i < n; i++)
        {
            if (movie[i].first >= 7)
            {
                if (result == -1)
                {
                    result = movie[i].second;
                }
                else if (result > movie[i].second)
                {
                    result = movie[i].second;
                }
            }
        }
        cout << result << endl;
    }

    return 0;
}