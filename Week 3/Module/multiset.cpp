#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    multiset<int> ms;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        ms.insert(val);
    }

    // auto it = ms.begin();

    // amra vector and aro kiso stl a it ke next element a nia jawer jonno aivabe kortam: ms.begin()+1; Kinto multiset a aivabe +1 kore kora jaina. Aikhae it++ korte hoi.
    // it++;
    // cout << *it << endl;
    // for (auto it = ms.begin(); it != ms.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    // range based for loop er madddhome print
    // for (auto value : ms)
    // {
    //     cout << value << " ";
    // }

    // find(value) --> value ta ke khuje pale oi address return korbe. Othwerwaise last eleemnt er porer address ms.end() er address retur korbe.
    // auto it = ms.find(6);
    // if (it != ms.end())
    // {
    //     cout << "Found" << endl;
    // }
    // else
    // {
    //     cout << "Not Found" << endl;
    // }

    // count(value) --> upore find er maddhome amra dekhesi kono akta element ase kina. Aita count() function er maddhomew jana jai. count(value) er moddhe jei value ke count kortesi, seita koto bar ase, seita count kore return korbe. Otherwise 0 return korbe.
    cout << ms.count(6) << endl; // Time complexity O(logN + k) --> aikhane k holo oi multiset a joto gulo 6 ase sei count value. Jodi 6 akbar theke tahole k=1 ar 6 jodi 3 bar tahke tahole k=3;

    // erase(value) --> jei value ke erase korbo, sei value ke first brack er moddhe dita hobe. But jei value ke erase or delete korte chassi, seita jodi multiset er moddhe na thake, tahole runtime error diba. Seijonno count() or found() er maddhoem jante hobe age, je oi value ta ase kina set a.
    // ms.erase(6); // aivabe korle jodi 6 exist na kore, tahole error diba. Tai exist ase kina, seita age check korte hobe.
    // Time complexity O(logN + k) --> aikhane k holo oi multiset a joto gulo 6 ase sei count value. Jodi 6 akbar theke tahole k=1 ar 6 jodi 3 bar tahke tahole k=3;

    // Ar uporer oivabe erase korle oi multiset a joto gulo 6 ase. Sobai erase hoia jabe. Let akta multiset a 4 bar 6 ase. Tader moddhe sudho 1ta 6 ke erase korbo. Tahole jekono akta 6 er pointer or address take get korte hobe and oi addres ke erase korte hobe. Tahole sudho 1ta 6 erase hoia aro 3ta 6 thakbei.
    //  auto it = ms.find(6);
    //  ms.erase(it);  // Time complexity O(logN + logN) --> O(2logN) --> O(logN)

    // // lower_bound(value) --> ai function similarly find er motoi kaj kore but akto advanced. Mane aikhane value hisabe 5 diasi. So oi multiset a 5 value ke find korbe. Jodi 5 value ta exist kore, tahole oi value er address ta return korbe. Otherwise 5 er theke akto boro jei value exist kore oi set a. oi value er address return korbe. Ar jodi oi value exist na kore and tar uporer kono value oo exist na kore oi set a. Tahole ms.end() er iterator ta return korbe.
    // auto it = ms.lower_bound(5);
    // // cout << *it << endl;  // aikhane finding value ba tar uporer value khuje na pele gurbage value dita pare. Tai nicher moto kore condition dia print korte hobe.

    // if (it == ms.end())
    // {
    //     cout << "End" << endl;
    // }
    // else
    // {
    //     cout << *it << endl;
    // }

    // upper_bound(value) --> ai function similarly lower_bound er motoi kaj kore but akto difference ase. Mane aikhane value hisabe 5 diasi. So oi multiset a 5 value ke find korbena. 5 er theke akto boro jei value exist kore oi set a. oi value er address return korbe. Ar jodi oi value exist na kore and tar uporer kono value oo exist na kore oi set a. Tahole ms.end() er iterator ta return korbe. lower_bound() and upper_bound() er moddhe difference holo lower_bound() a dewa value ta kew find kore. Ar upper_bound() sudho uporer value ke find kore.
    // auto it = ms.upper_bound(6);
    // // cout << *it << endl;  // aikhane finding value ba tar uporer value khuje na pele gurbage value dita pare. Tai nicher moto kore condition dia print korte hobe.

    // if (it == ms.end())
    // {
    //     cout << "End" << endl;
    // }
    // else
    // {
    //     cout << *it << endl;
    // }

    return 0;
}