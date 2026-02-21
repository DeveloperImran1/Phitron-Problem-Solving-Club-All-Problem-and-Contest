#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // pair a amra 2ta value ke jorai jorai store korte partam. But jodi 3ta ba aro besi value ke akta variable er moddhe store korte chai. Tokhon Tuple use korte pari.
    // tuple declare and value set Way 1:
    // tuple<string, int, string> t = make_tuple("Rahim", 3, "017832");

    // Way 2:
    tuple<string, int, string> t = {"Rahim", 3, "017821"};

    // Tuple value print Way 1:
    // cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << '\n';  // aikhane tuple a jeheto akadhik value rakha jai. Tai akta tuple er 1st value ke 0 number index bola hoi. 2nd value ke 1 number index dhora hoi. Aivabe cholte thake. So Syntax holo: get<index>(tuple_name);

    // Value get Way 2:
    auto [name, roll, phone_num] = t;
    cout << name << " " << roll << " " << phone_num << endl;

    return 0;
}