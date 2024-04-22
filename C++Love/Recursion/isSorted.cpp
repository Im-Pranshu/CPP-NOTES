#include<iostream>
using namespace std;

bool isSorted(int *arr, int n){
    // base case
    if(n==0 || n==1) return true;

    // Processing
    if(arr[0]  > arr[1]) return false;
    // Recursive Call
    else{
        bool remainingArrayPart = isSorted(arr+1,n-1);
        return remainingArrayPart;
    }
}


int main()
{
    int n;
    cin >> n;
    int arr[n];   
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    bool ans = isSorted(arr,n);

    (ans) ?  cout << "Sorted" : cout << "Not Sorted";
    return 0;
}