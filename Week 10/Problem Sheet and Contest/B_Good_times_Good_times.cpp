#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    vector<long long int> good_nums;
    for (int d1 = 0; d1 <= 9; d1++)
    {
        for (int d2 = d1 + 1; d2 <= 9; d2++)
        {

            queue<long long int> q;
            if (d1 > 0)
            {
                q.push(d1);
            }

            if (d2 > 0)
            {

                q.push(d2);
            }

            while (!q.empty())
            {
                long long int curr = q.front();
                q.pop();

                if (curr > 1000000000LL)
                    continue;

                if (curr >= 2)
                {
                    good_nums.push_back(curr);
                }

                q.push(curr * 10 + d1);
                q.push(curr * 10 + d2);
            }
        }
    }

    sort(good_nums.begin(), good_nums.end());
    good_nums.erase(unique(good_nums.begin(), good_nums.end()), good_nums.end());

    while (t--)
    {
        long long int n;
        cin >> n;

        long long int no_posible = 0;

        for (auto y : good_nums)
        {

            long long int tmp2 = n * y;

            bool total_unique_digit2[10] = {false};
            long long int unique_digit_2 = 0;
            while (tmp2 > 0)
            {
                long long int cur_digit = tmp2 % 10;
                tmp2 = tmp2 / 10;
                if (!total_unique_digit2[cur_digit])
                {
                    total_unique_digit2[cur_digit] = true;
                    unique_digit_2++;
                }
            }

            if (unique_digit_2 <= 2)
            {
                cout << y << endl;
                break;
            }
        }
    }

    return 0;
}