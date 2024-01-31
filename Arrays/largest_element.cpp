#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 2, 8, 5, 6, 7};
    int largest = arr[0];
    for (int i = 1; i < size(arr); i++)
    {
        largest = max(arr[i], largest);
    }
    cout << "Largest element in array is: " << largest << endl;
}