// Problem Link: https://www.codingninjas.com/studio/problems/ninja-and-the-number-pattern-i_6581959?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

#include <bits/stdc++.h>
using namespace std;

void getNumberPattern(int n)
{
    for (int i = 0; i < n * 2 - 1; i++)
    {
        for (int j = 0; j < n * 2 - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int bottom = (2 * n - 2) - i;
            cout << n - min(min(top, bottom), min(left, right));
        }
        cout << endl;
    }
}

int main()

{
    int n = 0;
    cin >> n;

    getNumberPattern(n);

    return 0;
}