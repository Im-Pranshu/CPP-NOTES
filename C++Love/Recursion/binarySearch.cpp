#include<iostream>
using namespace std;

void print(int *arr, int s,int e){
    // cout << "Broken " << endl;
    for(int i=s; i<=e; i++)
        cout << arr[i] << " ";
    cout << endl;
}

bool binarySearch(int *arr, int n, int s , int e , int key){
    print(arr,s,e);

    int mid = s + (e-s)/2;
    // base case
    if(s>e) return false; // element not found 
    if(arr[mid] == key) return true;// found element then stop.
    
    cout << "Mid : " << mid << endl;

    if(arr[mid] < key){ // search right part.
        cout << "arr[mid] < key = ";
        cout << arr[mid] << " < " << key << endl;
        cout << "Neglecting Left Part" << endl;
        return binarySearch(arr,n,mid+1, e , key);
    }
    else{ // search left part.
        cout << "arr[mid] > key = ";
        cout << arr[mid] << " > " << key << endl;
        cout << "Neglecting Right Part" << endl;
        return binarySearch(arr,n, s , mid-1 , key);
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

    int s = 0, e = n-1;

    bool ans = binarySearch(arr, n, s , e , key); 

    (ans) ? cout << "found" : cout << "not found";
    return 0;
}