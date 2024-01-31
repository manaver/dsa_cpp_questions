// Problem Link: https://www.codingninjas.com/studio/problems/n-forest_6570177?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;

void nForest(int n) {
 for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}


int main()
{
    int n = 0;
    cin >> n;

    nForest(n);

    return 0;
}