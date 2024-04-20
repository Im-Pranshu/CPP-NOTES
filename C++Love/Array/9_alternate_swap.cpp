#include<iostream>
using namespace std;

// APPROACH 1
// void swapAlternate(int arr[] , int size){
    // int f=0,s=1,temp;// here f is first index and s is second index temp will help in swapping
    // while(s < size){ // second size se bada ho jae ya barbar ho jae to loop break krdo kuki ab array me ek hi element bacha hoga or wo to swap hoga nhi kisi se.
    //     temp = arr[f];
    //     arr[f] = arr[s];
    //     arr[s] = temp;
    //     // index 0 , 1 ki swapping ke bad first and second will become 2,3 so that and 2 3 will be swapped. and so on.....
    //     f += 2;
    //     s += 2;
    // }
// }

// APPROACH 2.
void swapAlternate(int arr[] , int size){
    // loop sirf i ko 2 2 badhane ke liye hai jab tak size ke barbar nahi hai tab tk chlegi
    for(int i = 0 ; i < size ; i += 2)
    {
        // kya i + 1 size chota hai yani array me elements hai ki nahi ye check krna.
        if (i + 1 < size)
        {
            swap(arr[i],arr[i+1]);// c++ has inbuilt fn for swapping no need to do it manually.
        }
        
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
    int arr[] = {3,5,6,8,23,78};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    swapAlternate(arr,size);
    printArray(arr,size);
    return 0;
}