#include<bits\stdc++.h>
using namespace std;

void print(int *arr, int n){
    cout << "size of Array : " << n << endl;
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

bool linearSearch(int *arr, int n , int key){

    // base case -> Searched Whole array and element is still not found or array was already empty.
    if(n==0) return false;

    // Processing
    print(arr,n);

    if(arr[0] == key) return true;
    // Recursive Call
    else{
    bool checkRemainingPartOfArray = linearSearch(arr+1,n-1,key);
    return checkRemainingPartOfArray;
    }
}

int main()
{
    int n;
    int key;
    cin >> n >> key;
    int arr[n];   
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // linear search
    bool ans = linearSearch(arr,n,key);
    
    // Print array
    cout << endl << "Array : ";
    for(auto it:arr)
        cout << it << " ";
    cout << endl;
    


    (ans) ? cout << "found" : cout << "not found";
    return 0;
}