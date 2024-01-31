// Problem Link: https://www.codingninjas.com/studio/problems/alpha-ramp_6581888?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

#include <bits/stdc++.h>
using namespace std;

void alphaRamp(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char letter = 'A';

            if (j <= i)
                cout << char(letter+i-1) << " ";
        }
        cout << endl;
    }
}

int main()

{
    int n = 0;
    cin >> n;

    alphaRamp(n);

    return 0;
}