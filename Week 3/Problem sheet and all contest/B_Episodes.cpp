#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int number_of_movie, each_movie_time;
        cin >> number_of_movie >> each_movie_time;
        int total = number_of_movie * each_movie_time;
        int hour = total / 60;
        int minute = total % 60;

        cout << hour << " " << minute << endl;
    }

    return 0;
}