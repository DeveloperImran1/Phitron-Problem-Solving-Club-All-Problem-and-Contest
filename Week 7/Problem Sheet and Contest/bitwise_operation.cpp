#include <bits/stdc++.h>
using namespace std;

bool check_kth_bit_on_or_of(int n, int k)
{
    return ((n >> k) & 1); // n= holo decimal number. Ar k= koto number position er bit check korbo. Right shift er maddhome sei position er bit ke 1st position a nia jassi. Then 1 dia AND kortesi. Jar fole oi bit 1 holei output 1 asbe. Otherwise 0 asbe.
}

void print_on_and_off_bits(int n)
{
    for (int k = 7; k >= 0; k--)
    {
        cout << check_kth_bit_on_or_of(n, k) << " ";
    }
    cout << endl;
}

int turn_on_kth_bit(int n, int k)
{
    return (n | (1 << k));
}
int turn_off_kth_bit(int n, int k)
{
    return (n & (~(1 << k)));
}
int toggle_kth_bit(int n, int k)
{
    return (n ^ (1 << k));
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Bitwise bivinno Operation
    // 1. pheck_kth_bit_on_or_of -> k number position er bit ta 0 naki 1 check korbo.
    cout << check_kth_bit_on_or_of(45, 4) << endl;

    // 2. print_on_and_off_bits -> Kono decimal number er binary value gulo te kon bit 0 and kon bit 1 ta print korbe.
    print_on_and_off_bits(45);

    // 3. turn_on_kth_bit -> kth number position er bit ke 1 korbe.
    cout << turn_on_kth_bit(45, 4) << endl;

    // 4. turn_off_kth_bit -> kth number position er bit ke 0 korbe.
    cout << turn_off_kth_bit(45, 3) << endl;

    // 5. toggle_kth_bit -> kth number position er bit ke 1 thakle 0 korbe and 0 thakle 1 korbe.
    cout << toggle_kth_bit(45, 2) << endl;
    return 0;
}