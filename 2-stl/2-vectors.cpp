#include <bits/stdc++.h>
using namespace std;

int main()
{
    // When you don't know the size of the array and want to use some predefiend operations on it use vectors

    // Vector of Integers
    vector<int> v1;

    v1.push_back(10);
    v1.emplace_back(30); // same as push_back but it differs in some scenarios and also faster than push_back

    // Vector of Pairs
    vector<pair<int, int>> v2;
    v2.push_back({1, 2});
    v2.emplace_back(4, 3); // No need of using {} here

    // Declaring vector of size 5 and each index is initialized with 100
    vector<int> v3(5, 100);

    // By default if we declare vector of size suppose it's 5 it is by default initialized with 0
    vector<int> v4(5);

    // Copying v3 int v5
    vector<int> v5(v3);
    v5.push_back(200); // 200 Added to end

    // Iterating vector v5
    cout << "Iterating vector v5 using normal method: " << endl;
    for (int i = 0; i < v5.size(); i++)
    {
        cout << v5[i] << " ";
    }
    cout << endl;

    cout << "Concept of Iterators: " << endl;

    cout << "use of begin(): " << endl;
    vector<int>::iterator it = v5.begin(); //'it' points to the first element of v5 i.e. contains address of v5[0]

    // inserting element in start
    v5.insert(it, 800);

    // printing first element of v5
    cout << *(it) << endl;
    it++;
    // printing 2nd element
    cout << *(it) << endl;
    // going back to 1st element
    it--;
    cout << *(it) << endl;

    // v5.end() points to the end of the memory location
    //  So to print last element we use v5.end()-1 gives the address of the last elemnt of vector
    cout << "use of end(): " << endl;
    vector<int>::iterator it2 = v5.end() - 1;
    cout << *(it2) << endl;

    // Prints last element
    cout << "use of back(): " << endl;
    cout << v5.back() << endl;

    return 0;
}