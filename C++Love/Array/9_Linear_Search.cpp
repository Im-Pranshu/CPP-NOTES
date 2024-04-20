#include<iostream>
using namespace std;

void linearSearch(int arr[], int size, int key){
    for(int i = 0 ; i < size ; i++){
        if(arr[i] == key){// check if key is in array or not
            cout << key << " is found at Index " << i; // print index and tell found key.
        }
        // if(arr[i] == key){
        //     return 1;// found key so return 1.
        // }
        // return 0;// if not found return zero.
    }
}

int main()
{
    int arr[5];
    cout << "Enter Elements of the array :-\n";
    for(int i = 0;i<5;i++){
        cout << "arr[" << i << "] : ";
        cin >> arr[i];
    }
    int key;
    cout << "Enter Value you want to search for : ";
    cin >> key;
    linearSearch(arr,5,key);
    return 0;
}