// Problem Link: https://www.codingninjas.com/studio/problems/increasing-number-triangle_6581893?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=SUBMISSION

#include <bits/stdc++.h>
using namespace std;

void nNumberTriangle(int n)
{
    int temp = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(j<=i)
                cout<< temp++ << " ";
        }
        cout << endl;
    }
}

int main()

{
    int n = 0;
    cin >> n;

    nNumberTriangle(n);

    return 0;
}