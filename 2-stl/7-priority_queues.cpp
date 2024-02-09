#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        largest element stays at the top
        also known as max heap
        push -> O(n)
        pop -> O(n)
        top -> O(1)
    */
    priority_queue<int> pq;
    pq.push(5);     //{5}
    pq.push(2);     //{5, 2}
    pq.push(8);     //{8, 5, 2}
    pq.emplace(10); //{10, 8, 5, 2}

    pq.pop(); //{8, 5, 2}

    cout << pq.top() << endl; // prints 8

    // Minimum heap (stores min element at top)
    priority_queue<int, vector<int>, greater<int>> minPq;
    minPq.push(5); // {5}
    minPq.push(2); // {2, 5}
    minPq.push(8); // {2, 5, 8}

    minPq.emplace(10); //{2, 5, 8, 10}

    cout << minPq.top() << endl; // prints 2

    return 0;
}