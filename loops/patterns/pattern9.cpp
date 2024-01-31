// Problem Link: https://www.codingninjas.com/studio/problems/star-diamond_6573686?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

#include <bits/stdc++.h>
using namespace std;

void nStarDiamond(int n)
{
    // Printing Upper part
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - (i + 1); j++)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // Printing Bottom Part
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n - (i + 1); j++)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

int main()
{
    int n = 0;
    cin >> n;

    nStarDiamond(n);

    return 0;
}