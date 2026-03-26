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
        int n, k;
        cin >> n >> k;
        vector<int> price(n);
        vector<int> testines(n);
        for (int i = 0; i < n; i++)
        {
            cin >> price[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> testines[i];
        }

        int mx_testines = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                // cout << price[i] << " " << price[j] << endl;
                if (price[i] > price[j])
                {
                    int discount = price[i] / 2;
                    if (discount > 100)
                    {
                        discount = 100;
                    }

                    int total = price[j] + (price[i] - discount);
                    if (total <= k)
                    {
                        int current_testines = testines[i] + testines[j];
                        mx_testines = max(mx_testines, current_testines);
                    }
                }
                else
                {
                    int discount = price[j] / 2;
                    if (discount > 100)
                    {
                        discount = 100;
                    }

                    int total = price[i] + (price[j] - discount);
                    if (total <= k)
                    {
                        int current_testines = testines[i] + testines[j];
                        mx_testines = max(mx_testines, current_testines);
                    }
                }
            }
        }

        cout << mx_testines << endl;
    }

    return 0;
}