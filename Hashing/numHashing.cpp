#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[] ,  int n){
    cout << "Input Array :- ";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }   
    cout << endl;
}

int maxOfArr(int arr[], int n){
    int maxi;
    for(int i=0; i<n-1; i++)
    {
        maxi =  max(arr[i] , arr[i+1]);
    }
    return maxi;
}

int main() {
    int n;
    cout << "Enter size of the input array : " ;
    cin >> n;

    int arr[n];
    // Inputting array
    cout << "Enter the elements of the array :- " << endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }   

    printArr(arr,n);

    // Calculated maximum element of the array which help in providing maxing index for storing the precomputed no of occurences for all the values.
    int maxi = maxOfArr(arr, n);

    //precompute no of occurences of elements - 
    int hash[maxi+1] = {0};
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

// Enter no of queries.
    int q;
    cout << "Enter no of Queries : ";
    cin >> q;
    
    // Input all the queries.
    cout << "Enter Queries : ";
    while (q--) {
        int number;
        cin >> number;
        // fetching:
        cout << "Occurence of " << number << " : " << hash[number] << endl;
    }

    return 0;
}