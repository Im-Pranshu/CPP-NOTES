#include<bits\stdc++.h>
using namespace std;

void bubbleSort(int arr[],int n){
    // ist loop is showing no of rounds
    // for(int i=1; i<n; i++){
    //     // second loop is fixing the ith largest element in correct position.
    //     for(int j=0; j<n-i; j++){
    //         if(arr[j] > arr[j+1])
    //             swap(arr[j],arr[j+1]);
    //     }
    // }

    // **********Optimized Solution**********
    for(int i=1; i<n; i++){
        bool swapped = false;// creat a flag
        for(int j=0; j<n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;// if even once value is swapped then it will also run remaining rounds but if after iterating over whole loop no element is found to be unsorted then it means array is already sorted
            }
        }
        // if swapped is false means array is already sorted no swapping is done so break the loop no need to check for the remaining rounds this will make the 1st outer loop in constant time so total TC = O(n) for best case.
        if(swapped==false) break;
    }
}

void print(int arr[],int n){
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    // Inputing the array
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    cout << "Array Before Sorting :" << endl;
    print(arr,n);
    cout << "Array After Sorting :" << endl;
    bubbleSort(arr,n);
    print(arr,n);

    return 0;
}