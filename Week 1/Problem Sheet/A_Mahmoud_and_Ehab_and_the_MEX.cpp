// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, x;
//     cin >> n >> x;
//     vector<int> arr(n);
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         if (arr[i] == x)
//         {
//             count++;
//         }
//     }

//     sort(arr.begin(), arr.end());

//     if (x == 0)
//     {
//         if (arr[0] == 0)
//         {
//             cout << 1 << endl;
//         }
//         else
//         {
//             cout << 0 << endl;
//         }

//         return 0;
//     }
//     int min_val_available = 1;
//     for (int i = 0; arr[i] < x; i++)
//     {
//         if (arr[i] != x - 1)
//         {
//             count++;
//         }

//         if (arr[i] == x - 1)
//         {
//             min_val_available = 0;
//         }
//         // cout << arr[i] << " ";
//     }
//     count += min_val_available;

//     cout << count << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    int x_is_available = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == x)
        {
            x_is_available = 1;
        }
    }

    sort(arr.begin(), arr.end());

    int mex = 0;
    int freq[105] = {0};
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    for (int i = 0; i < x; i++)
    {
        if (freq[i] == 0)
        {
            mex++;
        }
        // cout << freq[i] << " ";
    }

    mex = mex + x_is_available;
    cout << mex << endl;

    return 0;
}