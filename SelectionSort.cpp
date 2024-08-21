// always start reading the function from main()

#include <iostream>
using namespace std;
int main()
{
  int arr[] = {9,4,1,50,23};
  
  int n = sizeof(arr)/sizeof(arr[0]);

  // iss algorithm mein hum 1st value ko minimum maan kay chaltay hain!
  // compare 9 with 4,1,50,23
  // if 9 is greater than any of these values than swap 9 with that value

  for (int i=0 ; i<n-1 ; i++) // this will start i from 9 and go till 50
  {
    for (int j=i+1 ; j<n ; j++) // this will start j from 4
    {
      if (arr[i] > arr[j]) // compare 9 with 4
      {                    // if 9 is greater than 4
        swap(arr[i],arr[j]); // swap 9 with 4
      }
    }
  }

  cout <<"Sorted Array : ";
  for (int p=0 ; p<n ; p++)
    cout << arr[p] << " ";

  // Homework: iss saray algorithm ko aik function mein likh kay run karo.
  return 0;
}