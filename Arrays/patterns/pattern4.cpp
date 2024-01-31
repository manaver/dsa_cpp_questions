// Problem Link: https://www.codingninjas.com/studio/problems/triangle_6573690?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

#include <bits/stdc++.h>
using namespace std;

void triangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1 << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int n = 0;
    cin >> n;

    triangle(n);

    return 0;
}