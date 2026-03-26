#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        s.insert(val);
    }

    // auto it = s.begin();

    // amra vector and aro kiso stl a it ke next element a nia jawer jonno aivabe kortam: s.begin()+1; Kinto set a aivabe +1 kore kora jaina. Aikhae it++ korte hoi.
    // it++;
    // cout << *it << endl;
    // for (auto it = s.begin(); it != s.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    // range based for loop er madddhome print
    // for (auto value : s)
    // {
    //     cout << value << " ";
    // }

    // find(value) --> value ta ke khuje pale oi address return korbe. Othwerwaise last eleemnt er porer address s.end() er address retur korbe.
    // auto it = s.find(6);
    // if (it != s.end())
    // {
    //     cout << "Found" << endl;
    // }
    // else
    // {
    //     cout << "Not Found" << endl;
    // }

    // count(value) --> upore find er maddhome amra dekhesi kono akta element ase kina. Aita count() function er maddhomew jana jai. count(value) er moddhe jei value ke count kortesi, seita jodi thake tahole 1 return korbe. Otherwise 0 return korbe.
    // cout << s.count(6) << endl;

    // erase(value) --> jei value ke erase korbo, sei value ke first brack er moddhe dita hobe. But jei value ke erase or delete korte chassi, seita jodi set er moddhe na thake, tahole runtime error diba. Seijonno count() or found() er maddhoem jante hobe age, je oi value ta ase kina set a.
    // s.erase(6); // aivabe korle jodi 6 exist na kore, tahole error diba. Tai exist ase kina, seita age check korte hobe.

    // // lower_bound(value) --> ai function similarly find er motoi kaj kore but akto advanced. Mane aikhane value hisabe 5 diasi. So oi set a 5 value ke find korbe. Jodi 5 value ta exist kore, tahole oi value er address ta return korbe. Otherwise 5 er theke akto boro jei value exist kore oi set a. oi value er address return korbe. Ar jodi oi value exist na kore and tar uporer kono value oo exist na kore oi set a. Tahole s.end() er iterator ta return korbe.
    // auto it = s.lower_bound(5);
    // // cout << *it << endl;  // aikhane finding value ba tar uporer value khuje na pele gurbage value dita pare. Tai nicher moto kore condition dia print korte hobe.

    // if (it == s.end())
    // {
    //     cout << "End" << endl;
    // }
    // else
    // {
    //     cout << *it << endl;
    // }

    // upper_bound(value) --> ai function similarly lower_bound er motoi kaj kore but akto difference ase. Mane aikhane value hisabe 5 diasi. So oi set a 5 value ke find korbena. 5 er theke akto boro jei value exist kore oi set a. oi value er address return korbe. Ar jodi oi value exist na kore and tar uporer kono value oo exist na kore oi set a. Tahole s.end() er iterator ta return korbe. lower_bound() and upper_bound() er moddhe difference holo lower_bound() a dewa value ta kew find kore. Ar upper_bound() sudho uporer value ke find kore.
    auto it = s.upper_bound(6);
    // cout << *it << endl;  // aikhane finding value ba tar uporer value khuje na pele gurbage value dita pare. Tai nicher moto kore condition dia print korte hobe.

    if (it == s.end())
    {
        cout << "End" << endl;
    }
    else
    {
        cout << *it << endl;
    }

    return 0;
}