#include<iostream>
using namespace std;

int firstOcc(vector<int>& arr,int size, int key){
    int start = 0 , end = size -1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start<=end){
        if(arr[mid] == key){
            ans = mid;// ans store krdo taki return kar sake end me.
            end = mid - 1;// left part me jao aur dekho agar or bar present hai ki taki 1st occurence mil sake.
        } else if (key < arr[mid]){ // left part me jao.
            end = mid - 1;
        } else if (key > arr[mid]){ // right part me jao.
            start = mid + 1; 
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int lastOcc(vector<int>& arr,int size, int key){
    int start = 0 , end = size -1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start<=end){
        if(arr[mid] == key){
            ans = mid;// ans store krdo taki return kar sake end me.
            start = mid + 1;// right part me jao aur dekho agar or bar present hai ki taki last occurence mil sake.
        } else if (key < arr[mid]){ // left part me jao.
            end = mid - 1;
        } else if (key > arr[mid]){ // right part me jao.
            start = mid + 1; 
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){
    int even[10] = {2,3,4,4,4,4,4,4,4,5};
    cout << "First Occurence of 4 is at Index : " << firstOcc(even,10,4) <<endl;
    cout << "Last Occurence of 4 is at Index : " << lastOcc(even,10,4) <<endl;
    return 0;
}