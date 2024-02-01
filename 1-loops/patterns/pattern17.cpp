// Problem Link: https://www.codingninjas.com/studio/problems/alpha-hill_6581921?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

#include <bits/stdc++.h>
using namespace std;

void alphaHill(int n)
{
    for (int i = 0; i < n; i++)
    {
        // For spaces
        for (int j = n; j > i + 1; j--)
        {
            cout << ' ';
        }
        // For Characters
        char ch = 'A'-1;

        for (int j = 0; j <= 2 * i; j++)
        {
            if (j > i)
            {
                ch--;
                cout << ch << " ";
            }
            else
            {
                ch++;
                cout << ch << " ";
            }
        }
        cout << endl;
    }
}

int main()

{
    int n = 0;
    cin >> n;

    alphaHill(n);

    return 0;
}