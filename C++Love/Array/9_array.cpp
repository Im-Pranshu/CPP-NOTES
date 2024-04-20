#include<iostream>
#include<climits>
using namespace std;
int printArray(int arr[],int size){
    cout<<"Printing the array : ";
    // Printing the array
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    //declare
    int number[10];
    // accesing an array
    // cout<<"Value at index 8 : "<< number[8] << endl;

    // accesing element out of range of declared elements.
    // cout<<"Value at index 12 : " << number[110] << endl; // it will show and warning.
    
    // intializing an array
    int second[3] = {3, 4 , 6};

    // accesig an element
    // cout<<"Value at 2 index is " << second[2] <<endl;

    // Declaring Size of Array
    int n = 10;

    // only value at index 0 to 2 is assigned remaining will be assigned as zero automatically.
    int third[n] = {3,4,6};
    int min = INT_MIN;
    int max = INT_MAX;
    if (third[0] > max){
        cout <<"Max is : ";
        cout << max <<endl;
    }
    if (third[2] < min){
        cout <<"Min is : ";
        cout << min <<endl;
    }
    

    // cout<<"Printing the array 3rd Array : ";
    // Printing the array manually
    // for(int i = 0;i<n;i++){
    //     cout<<third[i]<<" ";
    // }
    
    // Printing by Calling Function
    // printArray(third,n);
    // cout << endl;

    // printing a value out of range i.e. which is not assigned it will give some garbage value
    // cout<< "Index 10 of array third is "<<third[10]<<endl;

    // printing a value in range i.e. which is assigned it will give zero.
    // cout<< "Index 9 of array third is "<<third[9]<<endl;

    // All the value will be initialized as zero in the enitre lenght of array.
    int fourth[n] = {0};
    // cout<<"Printing the 4th array : ";
    // Printing the array Manually
    // for(int i = 0;i<n;i++){
    //     cout<<fourth[i]<<" ";
    // }

    // Printing by Calling Function
    // printArray(fourth,n);
    // cout << endl;

    // It will initialize index 0 as 1 only and the remaining elements will be initialized as zero. Just Like the array third.
    // can't initialize all location with 1 like this.
    int fifth[n] = {1};
    // cout<<"Printing the 5th array : ";
    // Printing the array Manually
    // for(int i = 0;i<n;i++){
    //     cout<<fifth[i]<<" ";
    // }

    // Printing by Calling Function
    // printArray(fifth,n);

    // // Calculate the size of the array
    // char arr[] = { 'a','s','d','f','g','h','e' };
    // // Compute the sizes
    // int size = sizeof(arr) / sizeof(arr[0]);
    // // Printing the size of the array according to inputted element in the array.
    // cout << "Size of the array is " << size;

    cout << endl;

    char ch[5];

    cout<<"Hare Krishna !!.\n";
    return 0;
}