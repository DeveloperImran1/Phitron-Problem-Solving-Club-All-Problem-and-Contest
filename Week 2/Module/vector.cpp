#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // vector container ----------------------------->
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }

    // vector function or Algorithm ----------------------------->

    // v.pop_back();

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    // cout << v.front() << endl;
    // cout << v.back() << endl;

    // v.clear();
    // cout << v.empty() << endl;

    // vector<int> v(10); // ai line dara. I mean v(size) dara 10 size er akta vector declare hobe. Ar jeheto kono value set korini. Tai default vabe all index er value 0 thakbe.
    // vector<int> v(10, 3); // ai line a v(size, default_value) 2nd perameter a default value set korte pari. Jar maddhome oi vector er all index a default vabe 3 set hoia thakbe.

    // assign() --> Uporer kajtai assign() function er maddhome korte pari.
    // vector<int> v;
    // v.assign(10, 3); // 1st a v namer sudho akta vector declare korlam. Tarpor assign(vector_size, default_value); er maddhome size and default value set kore disi.

    // v.resize(8) --> kono vector er size jodi declare na kora thake, or ager kono size ke edit kore, new size set korte resize(size_num) use kora hoi.

    // vector iterator ----------------------------->
    // Let amader kase 5 size er akta demo vector ase: {10, 20, 30, 40, 50};
    // begin() --> er maddhome uporer vector er 0 number index ke point korbe.
    // end() --> er maddhome uporer vector er last index er porer index ke point korbe. Mane 5 number index ke point korbe.
    // rbegin() --> er maddhome uporer vector er last index index ke point korbe. Mane 4 number index ke point korbe. rbegin() sobar last er index er porer index ke point korena.
    // rend() --> er maddhome uporer vector er 0 index index er ager index ke point korbe. Mane -1 number index ke point korbe. Jodio -1 number index nei. But imagine korte hobe -1 number index ke. Ar kaj korar somoi rend()+1 aivabe use korte hobe.
    // --end() --> Normaly end() algorithm dara vector er last index er porer index ke point kore. Tai jodi last index ba 4 number index ke dhorte chai, tahole auto last_element = v.end(); Tarpor last_element--; korte hobe. Sei kajta 1 line a kora hoi ai algorithm er maddhome. auto last_element = --v.end();

    // aikhane it variable vector er element er position ba address ke represent kore. Tai auto keyword diasi. Jar fole automatic type set kore niba. Ar it ke print korar somoi dereference kore niasi. Jarfole oi address er value ke print kortese.
    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Aro kiso vector er algorithm
    reverse(v.begin(), v.end()); // vector ke reverse korbe. Aikhane 1st perameter a vector er start index er position and 2nd perameter a kon element porjonto reverse korbo, sei element er porer element er position dita hobe. Tai v.end() diasi. Jeita last index er porer position.
    sort(v.begin(), v.end());    // small to large a sort korbe. Aikhane similarly perameter start position and end er porer position dita hobe.
    // sort(v.begin(), v.end(), greater<int>()); // Boro theke soto sort korbe.

    auto mn = min_element(v.begin(), v.end()); // perameter a bole dita hoi kon range er moddhe ami minimum element ke khujtesi. Ar aita minimum element er position return kore. Tai auto keyword er moddhe niasi. And value print korar jonno dereference kore print korte hobe.
    cout << *mn << endl;
    auto mx = max_element(v.begin(), v.end());
    cout << *mx << endl;

    // amra upore max element ke sudho findout korte parsi. But jodi oi max_elemnt er index need hoi, tahole amra oi max_element er position theke 1st element er position minus korlei max_element er index ta pabo.
    int mx_element_index = mx - v.begin();
    cout << mx_element_index << endl;

    return 0;
}