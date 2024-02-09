#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1, 1}
    ms.insert(1); //{1, 1, 1}

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1);

    // only a single one erased
    ms.erase(ms.find(1));

    return 0;
}