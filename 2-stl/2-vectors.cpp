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

    // printing all elements using iterators
    cout << "Iterating vector v5 using iterators: " << endl;
    for (auto itr = v5.begin(); itr != v5.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
    // printing all elements using foreach
    cout << "Iterating vector v5 using foreach: " << endl;
    for (auto itr : v5)
    {
        cout << itr << " ";
    }
    cout << endl;

    // Erase function in vectors
    cout << "erase() in vector" << endl;
    vector<int> nVec = {1, 2, 3, 4, 5, 6, 7}; // creating new vector
    for (auto itr : nVec)
    {
        cout << itr << " ";
    }
    cout << endl;
    // deleting 4, 5, 6 from nVec
    cout << "Erasing 4, 5, 6 from nVec" << endl;
    nVec.erase(nVec.begin() + 3, nVec.begin() + 6);
    for (auto itr : nVec)
    {
        cout << itr << " ";
    }
    cout << endl;

    // insert()
    vector<int> v6(2, 10);            //{100, 100}
    v6.insert(v6.begin(), 5);         //{5, 100, 100}
    v6.insert(v6.begin() + 1, 2, 40); //{5, 40, 40 100, 100}

    // copying vector
    vector<int> copyVec(2, 50);                            //{50, 50}
    v6.insert(v6.begin(), copyVec.begin(), copyVec.end()); // {50, 50, 5, 40, 40, 100, 100}

    cout << "Size of v6 is : " << v6.size() << endl;

    // Poping last element
    v6.pop_back();

    // erasing entire vector
    v6.clear();
    cout << "Size of v6 after emptying it using clear(): " << v6.size() << endl;

    // is the vector is empty? usnig empty()
    cout << "Is the vector is empty: " << v6.empty() << endl;

    return 0;
}