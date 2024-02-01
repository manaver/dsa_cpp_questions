// Problem Link: https://www.codingninjas.com/studio/problems/alpha-triangle_6581429?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=SUBMISSION

#include <bits/stdc++.h>
using namespace std;

void alphaTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + n - 1;
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
            ch--;
        }

        cout << endl;
    }
}

int main()

{
    int n = 0;
    cin >> n;

    alphaTriangle(n);

    return 0;
}