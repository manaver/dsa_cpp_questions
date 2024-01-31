// Problem Link: https://www.codingninjas.com/studio/problems/ninja-and-the-star-pattern-i_6581920?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

#include <bits/stdc++.h>
using namespace std;

void getStarPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main()

{
    int n = 0;
    cin >> n;

    getStarPattern(n);

    return 0;
}