#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,5};
    int size = sizeof(arr)/sizeof(arr[0]);// calculating size of the Array.

    int ans = 0;
    // XOR ing all elements of the array.
    for (int i = 0; i< size;i++){
        ans = ans ^ arr[i];
        // cout <<" step "<< i << " : " << ans << endl; // checking steps of the xoring
    }
    cout << endl;
    // XOR ing No from 1 to (n-1) with XOR of elements of array.
    for (int i = 1; i < size ; i++){ // i = 1,2
        ans = ans ^ i; // ans = 1,
        // cout <<" step "<< i << " : " << ans << endl; // checking steps of the xoring
    }
    //Printing the duplicate Number.
    cout << "The Duplicate number in the array is " << ans << endl;

    return 0;
}