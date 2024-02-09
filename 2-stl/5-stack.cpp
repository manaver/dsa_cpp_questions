#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Stack follows LIFO
    /*
    NOTE:
    Every operation in stack uses O(1) time complexity
    */
    stack<int> st;
    st.push(1);    //{1}
    st.push(2);    //{2, 1}
    st.push(3);    //{3, 2, 1}
    st.push(3);    //{3, 3, 2, 1}
    st.emplace(5); //{5, 3, 3, 2, 1}

    cout << st.top() << endl; // prints 5 "** st[2] is invalid **"

    st.pop();                   // st loooks like {3, 3, 2, 1}
    cout << st.top() << endl;   // 3
    cout << st.size() << endl;  // 4
    cout << st.empty() << endl; // 0

    stack<int> st1, st2;
    st1.push(4); // {4}
    st1.push(2); //{2,4}

    st2.push(20); //{20}
    st2.push(10); //{10, 20}

    st1.swap(st2);

    cout << "Top of st1: " << st1.top() << endl;
    cout << "Top of st2: " << st2.top() << endl;
    cout << endl;
    return 0;
}