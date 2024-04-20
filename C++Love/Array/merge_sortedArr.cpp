#include<bits\stdc++.h>
using namespace std;

void printAns(vector<int> ans){
    for(auto it:ans){
        cout << it << " ";
    }    
}

vector<int> mergeSortedArray(vector<int> arr1 , vector<int> arr2){
    vector<int> ans;
    int n1 = arr1.size(),n2=arr2.size();
    int i,j;
    i = j = 0;

    // input all the values in ans until unless 
    // all elements of one array are inserted.
    while(i < n1 && j < n2)
    {
        if(arr1[i] < arr2[j])
            ans.push_back(arr1[i++]);// here i++ means first store the value and then increment the value
        if(arr2[j] < arr1[i])
            ans.push_back(arr2[j++]);
    }

    // Now store the remaining elements of array 1.
    while(i<n1)
        ans.push_back(arr1[i++]);
    
    // Now store the remaining elements of array 2.
    while(j<n2)
        ans.push_back(arr2[j++]);
    
    return ans;
}



int main()
{
    vector<int> arr1{1,3,6,8,9};
    vector<int> arr2{-2,0,2,5,22,54,71};
    vector<int> ans;
    ans = mergeSortedArray(arr1,arr2);
    printAns(ans);
    return 0;
}