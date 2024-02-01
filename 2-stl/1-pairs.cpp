#include <bits/stdc++.h>
using namespace std;

int main()
{
    //When you need to store 2 values in 1 variables use pairs
    // Pairs
    pair<int, int> x = {2, 5};
    cout << "Pair Example: " << endl;
    cout << x.first << " " << x.second << endl;

    // Array of Pairs
    cout << "Array of Pair Example" << endl;
    pair<int, int> arr[] = {{1, 2}, {4, 2}, {7, 3}};

    for (int i = 0; i < size(arr); i++)
    {
        cout << arr[i].first << " " << arr[i].second << endl;
    }
    return 0;
}