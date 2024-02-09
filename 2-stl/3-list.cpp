#include <bits/stdc++.h>
using namespace std;

int main()
{
    // creating a list
    list<int> ls;
    ls.push_back(2);    //{2}
    ls.emplace_back(4); //{2, 4}

    ls.push_front(5);    //{5, 2, 4}
    ls.emplace_front(3); //{3, 5, 2 ,4}

    cout << "Elements of list: " << endl;
    for (auto itr : ls)
    {
        cout << itr << " ";
    }
    cout << endl;

    //alomst rest of the functions are almost same as vector
    return 0;
}