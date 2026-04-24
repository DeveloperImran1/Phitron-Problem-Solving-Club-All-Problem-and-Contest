#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a = 7;
    int b = 14;
    // int res = a & b;  // Bitwise AND
    // int res = a | b; // Bitwise OR
    // int res = a ^ b; // Bitwise XOR

    // int res = (11 << 1); // Bitwise Left Shift --> 11 er binary value te bit gulo 1 position left site a move korbe.
    // int res = (11 << 3); // Bitwise Left Shift --> 11 er binary value te bit gulo 3 position left site a move korbe.

    // int res = (11 >> 1); // Bitwise Right Shift --> 11 er binary value te bit gulo 1 position right site a move korbe.
    int res = (11 << 3); // Bitwise Right Shift --> 11 er binary value te bit gulo 3 position right site a move korbe.

    cout << res << endl;

    // interesting bisoy holo. Amra kono number er power ber korar jonno loop chalate pari or pow(n); korte pari. But lefft shift er maddhomeo easily power ber kora jai. Let, 2 er upor power 4 dila koto hoi ber korbo. Tahole (1 << 4) korlei 2^4 ber hobe.
    int n = 44;
    cout << (1 << n); // aikhane 2^44 kortesi. Jeita akta long long int value. Tai n variable ke long long a declare korte hobe. Ba aivabe likhte hobe: (1ll << n); aikhane 1 ke long long a convert kore nissi. Jar fole output ta long long a convert hobe.
    return 0;
}