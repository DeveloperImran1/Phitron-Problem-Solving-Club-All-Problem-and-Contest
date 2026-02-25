#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> dq(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dq[i];
    }

    // O(1) time complexity te front a insert
    dq.push_front(10);
    dq.push_front(20);
    dq.push_front(30);

    dq.pop_front();

    for (auto val : dq)
    {
        cout << val << " ";
    }

    // deque er Algorithm gulo holo:
    // push_back(), pop_back(), back()
    // push_front(), pop_front(), front()

    return 0;
}