// Problem Link: https://www.codingninjas.com/studio/problems/binary-number-triangle_6581890?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

#include <bits/stdc++.h>
using namespace std;

void nBinaryTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            if (j % 2 == 0)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n = 0;
    cin >> n;

    nBinaryTriangle(n);

    return 0;
}