#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
    // start karo 0 zero se and array ka end index (size - 1) hota hai, temp variable use krke swapping krdi
    int start = 0,end = size-1,temp;
    // jab tak start index , end index ke barabar ya usse chota hai tab tak loop chlao warna ruk jao iska matlab sb swap ho gye hai ab hm array ke mid element ke aage agye to rukna hai.
    while(start<=end){
        
        temp = arr[start];//temp me store krdo start index ki value.
        
        arr[start] = arr[end];// end wale index ki value start wale index me store krdo.
        
        arr[end] = temp;// start wale index ki value end wale index me krdo

        start++;
        end--;
    }

}

void printArray(int arr[], int size){
    for (int i = 0; i<size ;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {32,44,34,54,67,45,78,87,98,89};

    int size = sizeof(arr)/sizeof(arr[0]);// calculating the size of the array.

    // Printing the Array before reversing.
    cout << "Array Before Reverse :-\n";
    printArray(arr,size);

    // calling reverseArray fn to reverse the array.
    reverseArray(arr,size);

    // Printing the array after the reverse.
    cout << "Array After Reverse :-\n";
    printArray(arr,size);

    return 0;
}