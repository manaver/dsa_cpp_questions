// Problem Link: https://www.codingninjas.com/studio/problems/reverse-letter-triangle_6581906?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

#include <bits/stdc++.h>
using namespace std;

void nLetterTriangle(int n)
{
    for (int i = n; i > 0; i--)
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