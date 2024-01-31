// Problem Link: https://www.codingninjas.com/studio/problems/number-crown_6581894?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=SUBMISSION

#include <bits/stdc++.h>
using namespace std;

void numberCrown(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n * 2; j++)
        {
            if (j > n)
            {
                if(j-n+i > n){
                    cout << n*2+1-j << " ";
                }else{
                    cout << " ";
                }
            }
            else if (j <= n)
            {
                if (j <= i)
                {
                    cout << j << " ";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}

int main()

{
    int n = 0;
    cin >> n;

    numberCrown(n);

    return 0;
}