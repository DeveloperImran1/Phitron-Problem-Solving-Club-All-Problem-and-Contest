#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, int> mp;

    // insert korar way 1:
    // mp.insert({2, 10});  // aikhane 2 holo key name ar 2 number key er under a jei value set hobe, seita holo 10.
    // mp.insert({3, 20});

    // insert korar Way 2:
    // mp[key_name] = value;
    mp[2] = 10;
    mp[3] = 20;
    mp[5] = 60;
    mp[2] = 30; // amra jani map a key gulo unique hoi. So jeheto 2 key name a akta key ase. Tai notun kore ar 2 key name a insert korbena. Ager jei 2 namer key silo, seitake replace kore new value ta set korbe. Jar fole mp[2] er value akhon 30 hobe.

    // cout << mp[2] << " " << mp[3] << endl;
    // map value print Way 1:
    // for (auto [key, value] : mp)
    // {
    //     cout << key << " -> " << value << '\n';
    // }

    // map value print Way 2:
    // for (auto it : mp)
    // {
    //     cout << it.first << " -> " << it.second << '\n';
    // }

    // map er moddhe kono key ase kina find korbe. Jodi oi key thake tahole oi key er position or address ta return korbe. Jeita auto type er variable a rakhtesi. Ar jodi oi key na thake map er moddhe tahole sobar last er porer position, I mean mp.end() er address return korbe.
    // auto it = mp.find(2);
    // if (it == mp.end())
    // {
    //     cout << "Key not found" << '\n';
    // }
    // else
    // {
    //     cout << it->first << " -> " << it->second << '\n';
    // }

    // amra direct aivabe find koresi upore map_name[key_name]; tahole find() function keno dorkar?? Karon mp[key] er moddje jei key dissi, oi key jodi map er moddhe na thake, tahole value hisabe 0 dei and oi map a oi key ke 0 value dia insert kore dei automatic. Aijonno direct map_name[key_name]; dia access kora thik na.
    // cout << mp[25] << endl;

    // erase() --> map_name.erase(key_name or position_address);
    // mp.erase(2);  // aivabe kono akta key ke erase korte pari. Kinto 2 namer kono  key jodi map a na thake, tahole runtime error diba. Seita handle korar jonno age find() er maddhome age check kore nita hobe.

    // auto it = mp.find(2);
    // if (it != mp.end())
    // {
    //     mp.erase(2);
    //     // mp.erase(it);  // aikhane oi address ta dilew hobe.
    // }

    // cout << mp.size() << '\n';
    // cout << mp.empty() << '\n';

    // lower_bound() and upper_bound()
    // auto it = mp.lower_bound(3);  // lower_bound(key_name); er maddhome oi key er soman or boro jei key pabe, sei key ke return korbe. Akadhik position ke noi, just 1st jei greater or equal key pabe. Sei key ke return korbe.
    auto it = mp.upper_bound(3); // upper_bound(key_name); er maddhome oi key er theke strictly boro jei key pabe, sei key ke return korbe. Akadhik position ke noi, just 1st jei greater key pabe. Sei key ke return korbe. lower_bound() theke upper_bound() er difference holo upper_bound() sudho boro key ke return korbe.
    cout << it->first << " " << it->second << '\n';
    return 0;
}