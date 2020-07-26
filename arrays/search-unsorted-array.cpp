#include <iostream>

using namespace std;

/*
 Big O = O(n);
*/


int findElement(int arr[], int n, int key)
{
    for (int i =0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}


int main()
{
  int arr[]  = {12, 3, 4, 10, 5};

  int n = sizeof(arr)/sizeof(arr[0]);

  int key = 10;

  int position = findElement(arr, n, key);

  if (position == -1)
  {
      cout << "Element not found";
  } else 
  {
      cout << "Element found at position: " << position << endl;
  }

}