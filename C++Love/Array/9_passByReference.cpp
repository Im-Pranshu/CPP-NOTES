#include<iostream>
using namespace std;
// Program to see working of Pass By Reference.

void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void update(int arr[] , int size){
    cout << "Enter Index and Value to be updated : ";
    int key,index;
    cin >> index >> key;
    arr[index] = key;// this will actually update the data inside the main function because this is the address only actual value is in the main function.
    // Array after the call of update function
    cout << "Array after the call of update function :-\n";
    printArray(arr,size);
}

int main()
{
    int arr[3] = {2,7,4};

    cout << "Array before the calling of update function :-\n";
    // printing array before calling update function
    printArray(arr,3);

    // Paasing the value by Reference of Address.
    update(arr,3);//here as we know that arr -> points to the base address or first block of the array so arr means base address of the array so here we're not passing the actual value to the update function but here we're just sending the base address to the update function but in the case of variable copy of the value is made sended to the function thats why it's called update by value.
    
    return 0;
}