#include<bits\stdc++.h>
using namespace std;

void selectionSort(int arr[] ,int n){
    for(int i=0; i<n; i++){
        // Assume the i index as minimum value.
        int min = i;
        // Find the minimum value within the array by comparing with i and j will start comparing the values from one index ahead.
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[min]) min = j;
        }
        // after getting the min value swap it with i index value which is original place of that value so swap it.
        swap(arr[i],arr[min]);
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
    selectionSort(arr,n);
    print(arr,n);

    return 0;
}