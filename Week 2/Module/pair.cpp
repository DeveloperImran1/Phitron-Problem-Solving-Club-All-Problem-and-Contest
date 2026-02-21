#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Pair er maddhome 2ta value ke aksathe pair akare ba jorai jorai store korte pari.

    // Pair declare and value assign way 1:
    // pair<string, int> student = make_pair("Rahim", 10);

    // way 2:
    pair<string, int> student = {"Rahim", 10};

    // pair value access way 1:
    // cout << student.first << " " << student.second;

    // Way 2: aikhane auto holo c++ er akta reserved keyword. Jeita automatic bujhte pare kono variable ki data type er. So complex kono data type er khetre auto use korte pari. But auto keyword ta C++ 17 version ba tar porer version a use kora jai sudho.
    auto [name, roll] = student;
    // cout << name << " " << roll;

    // value changed korte hole
    student.first = "Karim";

    // Nested pair -> main pair er 1st a name rakhtesi and second a aro akta pair rakhtesi. Jar first holo age and second holo phone number.
    pair<string, pair<int, string>> man = {"Imran", {20, "0131171"}};
    cout << man.first << " " << man.second.first << " " << man.second.second << endl;

    return 0;
}