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
        vector<double> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        double sum = 0;
        sort(v.begin(), v.end());

        for (int i = 0; i < n; i++)
        {
            sum += v[i];
        }
        double avg = sum / n;

        for (int i = 0; i < v.size(); i++)
        {

            if (v[i] < avg)
            {
                sum -= v[i];
                n--;
            }
            else
            {
                break;
            }
            avg = sum / n;
        }

        cout << n << endl;
    }

    return 0;
}