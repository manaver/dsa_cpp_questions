#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Stack follows FIFO
    /*
    NOTE:
    Every operation in Queue uses O(1) time complexity
    */
    queue<int> q;
    q.push(1);    // {1}
    q.push(2);    // {1, 2}
    q.emplace(4); // {1, 2, 4}

    q.back() += 5; //{1, 2, 9}

    cout << q.back() << endl; // prints 9

    cout << q.front() << endl; // prints 1

    q.pop(); //{2, 9}

    cout << q.front() << endl; // prints 2

    return 0;
}