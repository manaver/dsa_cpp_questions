// Problem Link: https://www.codingninjas.com/studio/problems/seeding_6581892?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

#include <bits/stdc++.h>
using namespace std;

void seeding(int n)
{
    for (int i = n-1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

int main()
{
    int n = 0;
    cin >> n;

    seeding(n);

    return 0;
}