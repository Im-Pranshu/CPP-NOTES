#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }cout<<endl;
}

void sort01(int arr[],int size){
    int left = 0 , right = size - 1;
    int step = 0;
    // left wala jese hi right ke barbar ajae ya bada ho jae ruk jao....
    while(left < right){
        // jab left me zero hai to age badh jao or tab tk kro jb tk left chota hai right se..
        while(arr[left] == 0 && left  < right)
            left++;
        // jab right me one hai to piche aa jao ek iteration or tab tk kro jb tk left chota hai right se..
        while(arr[right] == 1 && left  < right)
            right--;
        
        // agar yha tak phuch gye ho to matlab hai ki
        // arr[left] == 1 && arr[right] == 0 hai......
        // left chota rehna chahiye right se humesa...
        if(left  < right)
        {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
    

}

int main()
{
    int arr[] = {1,1,0,0,0,0,1,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Array Before Sorting :-\n";
    printArray(arr,size);
    sort01(arr,size);
    cout << "Array After Sorting :-\n";
    printArray(arr,size);
    return 0;
}