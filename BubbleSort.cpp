#include <iostream>
using namespace std;
int main()
{
    int arr[] = {14,3,256,0,5,1,9}; // this is the unsorted array
    int count = 0, bount = 0; // these are the counters

    int n = sizeof(arr)/sizeof(arr[0]); // this is the size of the array

    for (int g=0 ; g<n ; g++) // yeh wala loop sirf andar walay kaam ko baar baar karwanay kay liye hai
    {
        cout <<"    I am the outerloop, I have run "<< ++count <<" times" <<endl;
        for (int i=0 ; i<n-1 ; i++) // yeh wala loop sub say barri value ko end pay laany kay liye hai, woh kaisay?
        {
            cout <<"I am the innerloop, I have run "<< ++bount <<" times"<<endl;    
            if (arr[i] > arr[i+1]) // 1st value ko compare karein gay 2nd value say,
            {
                swap(arr[i], arr[i+1]); // agar 1st wali barri hai tou uss ko 2nd wali say swap karwa dein gay
                                        // aur yeh kaam hum kitni dafa karein gay? "n" dafa, woh kaisay? outerloop say
            }
        }
    }

    cout <<"\nSorted array : ";
    for (int u=0 ; u<n ; u++)
        cout <<arr[u] <<" ";
    return 0;

    // Homework: iss saray algorithm ko aik function mein likh kay run karo.
}