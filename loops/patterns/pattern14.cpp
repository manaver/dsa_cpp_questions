// Problem Link: https://www.codingninjas.com/studio/problems/increasing-letter-triangle_6581897?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

#include <bits/stdc++.h>
using namespace std;

void nLetterTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char letter = 'A';
        for (int j = 1; j <= n; j++)
        {
            if(j<=i)
                cout<< letter++ << " ";
        }
        cout << endl;
    }
}

int main()

{
    int n = 0;
    cin >> n;

    nLetterTriangle(n);

    return 0;
}