#include<bits\stdc++.h>
using namespace std;

void insertionSort(int arr[],int n){
    // i begins from 1 because we assumed that 0th element is already sorted.
    for(int i=1; i<n; i++){
        int temp = arr[i]; // store the value which we want to compare
        // and insert at correct position.
        int j=i-1;// loop begins from i-1 which means 
        // we'll compare all the values from i-1 to 0 
        // to get the correct position of temp.
        while(j>=0){
            if(temp < arr[j]){
                // Shift the elements to the right because temp
                //  will be inserted into left of next largest 
                // value of temp.
                arr[j+1] = arr[j];
            }
            else {// stop checking because if temp is greater then all the values before current index j will also be smaller than temp as the left part of array is sorted and we have to insert the value at the rigth of the index j.
                break;
            }
            j--;
        }
        // store the value in the next element of the j because
        //  temp is next largest value of j index value.
        arr[j+1] = temp;
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
    insertionSort(arr,n);
    print(arr,n);

    return 0;
}