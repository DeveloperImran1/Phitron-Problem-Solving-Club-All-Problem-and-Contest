#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Priority Queue:
    // 1. Aita mainly Heap data structure er er STL.
    // 2. Priority Queue 2 type er hoi. 1. Min Heap 2. Max Heap
    // 3. priority queue er main charectersticks holo sorted thakbe. Ai sorted 2vabe hote pare:
    // 3.1: Non-drecresing: soto theke boro (ascending order) a value gulo thakbe and duplicate value thakte pare. Ar aitakei Min Heap bole. Ex: 1 1 2 3 4 4 5
    // 3.2: Non-increasing: boro theke soto (descending order) a value gulo thakbe and duplicate value thakte pare. Ar aitakei max heap bole. priority_queue() declare korle initialy max heap ee declare hoi. Ar min heap declare korar jono akta changes korte hoi. Ex: 5 4 4 3 2 1 1

    priority_queue<int> pq; // Max Heap or Non-increasing (boro theke soto)
    // priority_queue<int, vector<int>, greater<int>> pq; // Min Heap or Non-decreasing (soto theke boro)
    pq.push(2);
    pq.push(5);
    pq.push(6);
    pq.push(4);
    pq.push(2);
    pq.push(4);

    // cout << pq.top() << '\n';
    // pq.pop();
    // cout << pq.top() << '\n';
    // cout << "size -> " << pq.size() << '\n';
    // cout << pq.empty() << '\n';

    while (!pq.empty())
    {
        cout << pq.top() << '\n';
        pq.pop();
    }

    return 0;
}