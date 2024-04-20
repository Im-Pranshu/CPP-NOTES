#include<iostream>
using namespace std;

int getPivot(int arr[],int n){
    int s=0, e = n-1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid] >= arr[0])
            s = mid+1;
        else
            e = mid;
        mid = s + (e-s)/2;
    }
    return s;
}

int main(){
    int arr[] = {2,3,7,9,0,1};
    int size = sizeof(arr)/sizeof(int);
    int pivot = getPivot(arr,size);
    cout << "Pivot element is " << arr[pivot] << endl;
    return 0;
}