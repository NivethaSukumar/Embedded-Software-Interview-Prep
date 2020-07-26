// Delete an element at the given index in an array
/*
Big (O)
*/
#include <iostream>

using namespace std;

int main()
{
    int arr[] = {2, 4, 5, 6, 7, 8};
    int n = sizeof(arr)/sizeof(arr[0]);

    int key = 3;
    cout <<"Original array is " << endl;
    for (int i = 0; i < n; i ++)
    {      
        cout << arr[i] << "\t";
    }

    for (int i = key; i <n; i++)
    {
        arr[i] = arr[i+1];
    }
    n = n-1;
    
    cout <<"After deletion in array is " << endl;
    for (int i = 0; i < n; i ++)
    {
        cout << arr[i] << "\t";
    }


}