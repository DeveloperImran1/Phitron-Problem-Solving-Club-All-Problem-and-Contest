#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 2d vector declare. Jar n= rows_number and m= cols_num ar initial value 5 rakhesi. Thats mean main vector er total koita element hobe aita fixed and every eleemnt er under a jei arekta vector thakbe, sei vector er size oo fixed.
    // int n, m;
    // cin >> n >> m;

    // vector<vector<int>> v(n, vector<int>(m, 5));
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << v[i][j] << " ";
    //     }
    //     cout << '\n';
    // }

    // aikhane n size er akta vector declare koresi. Jar every element er type hobe arekta vector. So n sonkhok bar loop chalie a akta kore arekta vector declare and input nibo. Tarpor sei vector ke main vector v er moddhe pushback kortesi. Jar fole main vector v er every element a jei vector thakbe. Sei vector er size agei fixed korte hossena. Dynamic thaktese.
    int n;
    cin >> n;

    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vector<int> a(m);

        for (int j = 0; j < m; j++)
        {
            cin >> a[j];
        }

        v.push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << '\n';
    }

    // vector er moddhe string add
    int k;
    cin >> k;
    vector<string> names;
    for (int i = 0; i < k; i++)
    {
        string s;
        cin >> s;
        names.push_back(s);
    }
    for (int i = 0; i < k; i++)
    {
        cout << names[i] << endl;
    }

    return 0;
}