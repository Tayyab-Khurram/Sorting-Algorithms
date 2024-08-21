// always start reading the function from main()

#include <iostream>
using namespace std;

// Merges two subarrays of arr[].
// First subarray is arr[start...mid]
// Second subarray is arr[mid+1...end]
void merge(int arr[], int start, int mid, int end)
{
    int n1 = mid - start + 1; // yeh kya hai? array kay shuru say lay kar mid tak kitnay elements parray huway hain? batao +1 kyuon likha?
    int n2 = end - mid; // aur yeh kya hai? array kay end say lay kar mid tak kitnay elements parray huway hain?

    int *L = new int[n1]; // jitnay elements thay utnay elements 
    int *R = new int[n2]; // ki hum nay dynamic arrays bana lee

    for (int i = 0; i < n1; i++)
        L[i] = arr[start + i]; // L[] wali array mein original array kay saray left elements copy kar diye, theekhai?
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + j + 1]; // R[] wali array mein original array kay saray right elements copy kar diye

    int i = 0, j = 0;
    int k = start;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j]) // agar L[] wali array ka pehla element R[] wali array kay pehlay element say chota hai tou woh chota element original array mein daal do.
        {
            arr[k] = L[i]; // yeh initially zero index pay hoga
            k++;
            i++;
        }
        else // aur agar L[] wali array ka pehla element chota nahi hai tou zaahir hai R[] wali array ka pehla element chota hoga, haina?
        {
            arr[k] = R[j]; // uss ko daal do phir original array mein
            k++;
            j++;
        }
    }

    // Copy the remaining elements of L[],
    // if there are any
    while (i < n1)
        arr[k++] = L[i++];

    // Copy the remaining elements of R[],
    // if there are any
    while (j < n2)
        arr[k++] = R[j++];
}

void mergeSort(int arr[], int start, int end)
{
    if (start >= end)
        return; // yeh kon sa case hai? agar array mein 1 value aati hai yah 0 value aati hai toh bhai sahab yahan say he wapis chalay jana!

    int mid = (start + end) / 2; // iss ka tou pata he hai
    mergeSort(arr, start, mid); // yeh hum nay recursive call maari pehlay index say lay kar array kay mid tak, hum kar kya rahy hain? array kay left part kay har dabbay ko individual dabbay mein torr rahay hain.
    mergeSort(arr, mid + 1, end); // yeh phir recursive call maari mid+1 say lay kar array kay end tak, hum kar kya rahy hain? array kay right part kay har dabbay ko individual dabbay mein torr rahay hain.

    // inn 2 calls kay baad humara left wala aur right wala part toot chuka hai aur array ka har element aik dabbay mein store ho chuka hai.
    merge(arr, start, mid, end); // abb hum inn tootay huway dabbon ko aapas mein merge karein gay, chalo ooper jaao aur function call ko dekho kaisay chal raha hai?
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[] = {0, 0, 0, 200, 11, 3, 0}; // try and modify these values
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is \n";
    print(arr, n); // yahan pay print walay function call huwa hai

    mergeSort(arr, 0, n - 1); // mergeSort walay function ko hum nay starting aur ending of array pass kiya

    cout << "\nSorted array is \n";
    print(arr, n);
    return 0;
}