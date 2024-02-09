#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> st;
    st.insert(1); //{1}
    st.insert(2); //{1, 2}
    st.insert(2); //{1, 2}
    st.insert(4); //{1, 2, 4}
    st.insert(3); //{1, 2, 3, 4}

    auto it = st.find(3); // returns an iterators that points to the element

    auto it2 = st.find(6); // if it doesnot finds then it returns st.end()

    st.erase(2);             // removes 2
    int count = st.count(2); // only have 1(if element exists) or 0

    // lower_bound() and upper_bound() function works in the same way as in vector it does
    auto itr1 = st.lower_bound(2);
    auto itr2 = st.upper_bound(2);

    return 0;
}