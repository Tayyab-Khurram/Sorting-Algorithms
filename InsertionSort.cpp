// alway start reading the function from main()

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1,40,5,28,57,3}; // this is the unsorted array

    int n = sizeof(arr)/sizeof(arr[0]); // size of array

    for (int i=1 ; i<n ;i++) // 1st position (matlab 2nd element) say shuru kiya kyuon kay hum nay 1st element ko sorted maana hai
    {
        int sorted = arr[i]; // 2nd element ko sorted variable mein store kiya

        int j=i-1; // hum jahan pay bhi kharay hon hum nay uss value ko peechay wali range ki her value say compare karna hai
        for (; j>=0 ; j--) // jaisay kay hum 57 pay hain tou hum nay 57 ko peechay wali range say compare karna hai
        {
            if (sorted < arr[j]) // agar 57 peechay wali range ki kisi bhi value say chota hai

                arr[j+1] = arr[j]; // tou hum peechay wali saari values ko aik position agay move karwayein gay taa kay 57 ki jagah banay
            else
                break;  // aur agar 57 pichli saari values say barra hai tou hum kuch bhi nahi karein gay, right?
        }
        arr[j+1] = sorted; // jo jagah shifting karwanay kay baad khaali huwi hai udhar hum uss value ko daalein gay.

        // int j=i-1;
        // while (j>=0)
        // {
        //     if (sorted < arr[j])
        //     {                            // yehi
        //         arr[j+1] = arr[j];       // saari cheez
        //     }                            // aap while loop
        //     else                         // say bhi likh saktay ho
        //         break;                   // theek hai?
        //     j -= 1;
        // }
        // arr[j+1] = sorted;
    }

    cout <<"Sorted Array : "; // aur yeh sirf hum values ko display karwa rahay
    for (int k=0 ; k<n ; k++)
        cout <<arr[k] <<" ";

    // Homework: iss saray algorithm ko aik function mein likh kay run karo.
    return 0;
}