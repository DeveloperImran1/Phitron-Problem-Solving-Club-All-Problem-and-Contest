#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> cards(n);
    for (int i = 0; i < n; i++)
    {
        cin >> cards[i];
    }

    // sort(cards.begin(), cards.end(), greater<int>());

    // for (int i = 0; i < n; i++)
    // {
    //     cout << cards[i] << " ";
    // }

    int sum1 = 0;
    int sum2 = 0;
    int current_val = 1;
    for (int i = 0, j = cards.size() - 1; i <= j;)
    {
        if (current_val % 2 == 1)
        {
            if (cards[i] >= cards[j])
            {
                sum1 += cards[i];
                i++;
            }
            else
            {
                sum1 += cards[j];
                j--;
            }
        }
        else
        {
            if (cards[i] >= cards[j])
            {
                sum2 += cards[i];
                i++;
            }
            else
            {
                sum2 += cards[j];
                j--;
            }
        }
        current_val++;
    }

    cout << sum1 << " " << sum2;

    return 0;
}