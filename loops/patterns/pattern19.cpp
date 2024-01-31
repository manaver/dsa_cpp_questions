// Problem Link: https://www.codingninjas.com/studio/problems/symmetric-void_6581919?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

#include <bits/stdc++.h>
using namespace std;

void symmetry(int n)
{
    int spaces = 0;
    // Upper part
    for (int i = 0; i < n; i++)
    {

        // stars
        for (int j = 0; j < n; j++)
        {
            if (j < n - i)
                cout << "* ";
        }
        // spaces
        for (int j = 0; j < spaces; j++)
        {
            cout << "  ";
        }
        // stars
        for (int j = 0; j < n; j++)
        {
            if (j < n - i)
                cout << "* ";
        }
        cout << endl;
        spaces += 2;
    }

    spaces -= 2;

    // Lower part
    for (int i = n - 1; i >= 0; i--)
    {

        // stars
        for (int j = 0; j < n; j++)
        {
            if (j < n - i)
                cout << "* ";
        }
        // spaces
        for (int j = 0; j < spaces; j++)
        {
            cout << "  ";
        }
        // stars
        for (int j = 0; j < n; j++)
        {
            if (j < n - i)
                cout << "* ";
        }
        cout << endl;
        spaces -= 2;
    }
}

int main()

{
    int n = 0;
    cin >> n;

    symmetry(n);

    return 0;
}