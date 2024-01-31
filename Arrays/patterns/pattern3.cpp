// Problem Link: https://www.codingninjas.com/studio/problems/n-triangles_6573689?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

#include <bits/stdc++.h>
using namespace std;

void nTriangle(int n) {
 for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int n = 0;
    cin >> n;

    nTriangle(n);

    return 0;
}