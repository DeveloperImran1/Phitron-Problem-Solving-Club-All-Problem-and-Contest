#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int count = 0;
        while (arr.size() >= 1)
        {
            count++;
            if (arr.size() == 1)
            {
                arr.erase(arr.begin());
                break;
            }

            sort(arr.begin(), arr.end(), greater<int>());

            if (arr[0] > 2)
            {
                arr.erase(arr.begin());
            }
            else
            {
                arr[0]--;
                if (arr.size() > 1)
                {
                    arr[1]--;
                }

                if (arr.size() > 1)
                {
                    if (arr[0] == 0)
                    {
                        arr.erase(arr.begin());
                        if (arr[0] == 0)
                        {
                            arr.erase(arr.begin());
                        }
                    }
                    else if (arr[1] == 0)
                    {
                        arr.erase(arr.begin() + 1);
                    }
                }
                else
                {
                    if (arr[0] == 0)
                    {
                        arr.erase(arr.begin());
                    }
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}