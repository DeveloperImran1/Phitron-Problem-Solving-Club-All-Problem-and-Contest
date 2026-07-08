

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long int a, b, c;
//         cin >> a >> b >> c;
//         if (a == b)
//         {
//             cout << 0 << endl;
//             continue;
//         }

//         long long int count = 0;
//         while (1)
//         {
//             a = __gcd(a, c);
//             b = __gcd(b, c);
//             c++;
//             if (a == b)
//             {
//                 count++;
//                 break;
//             }
//             // else
//             // {

//             //     count++;
//             //     c++;
//             // }
//         }
//         cout << count << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int get_min(int a, int b, int c, int depp)
{

    if (a == b)
    {
        return 0;
    }

    if (depp >= 7)
    {
        return 1000000;
    }

    int min_mov = 1000000;

    min_mov = min(min_mov, 1 + get_min(a, b, c + 1, depp + 1));

    int next_a = __gcd(a, c);
    int next_b = __gcd(b, c);

    if (next_a != a || next_b != b)
    {
        min_mov = min(min_mov, 1 + get_min(next_a, next_b, c, depp + 1));
    }

    return min_mov;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        cout << get_min(a, b, c, 0) << "\n";
    }

    return 0;
}