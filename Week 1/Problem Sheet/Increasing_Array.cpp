// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }

//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (v[i] > v[j])
//             {
//                 count == 0 ? count += 2 : count++;
//                 swap(v[i], v[j]);
//             }
//         }
//     }

//     cout << count << " ";

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    long long int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            int res = v[i] - v[i + 1];
            count += res;
            v[i + 1] = v[i + 1] + res;
        }
    }

    cout << count << " ";

    return 0;
}