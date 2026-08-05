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

        int one_exist = 0;
        vector<int> v_zero;
        vector<int> v_greater_zero;
        vector<int> v_one;
        vector<int> v_greater_one;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (val == 0)
            {
                v_zero.push_back(val);
            }
            else
            {
                if (val == 1)
                {
                    one_exist = 1;
                    v_one.push_back(1);
                }
                else
                {
                    v_greater_one.push_back(val);
                }
                v_greater_zero.push_back(val);
            }
        }

        if (v_zero.size() <= v_greater_zero.size())
        {
            cout << 0 << endl;
        }
        else
        {
            if (v_zero.size() - 1 == v_greater_zero.size())
            {
                cout << 0 << endl;
            }
            else
            {
                if (!one_exist)
                {
                    cout << 1 << endl;
                }
                else
                {

                    if (v_greater_one.size() >= 1)
                    {
                        cout << 1 << endl;
                    }
                    else
                    {
                        cout << 2 << endl;
                    }
                }
            }
        }
    }

    return 0;
}