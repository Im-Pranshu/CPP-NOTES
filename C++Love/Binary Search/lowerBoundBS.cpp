// What is Lower Bound?
// The lower bound algorithm finds the first or the smallest index
// in a sorted array where the value at that index is greater than
// or equal to a given key(x).
// The lower bound is the smallest index, ind, where arr[ind] >= x.
// But if any such index is not found, the lower bound algorithm 
// returns n i.e. size of the given array.
#include<iostream>
using namespace std;

int lowerBoundBS(int arr[],int n, int x){
// ***************Brute force Approach***************
    // for(int i=0; i<n; i++){
    // // as it encounters the greater or equal element to the key
    // //  it'll stop and return i.
    //     if(arr[i]>=x) return i;
    // }
    // // if all elements are smaller than x lower bound is n.
    // return n;

// ***************Binary Search Approach***************
int s=0,e=n -1;
	int mid = s+(e-s)/2;
	// initialising with 1 so that 
	// if all elements are smaller than x then return n.
	int ans = n;
	while(s<=e){
		// if mid >= 0 then it may be the answer
		if(arr[mid] >= x){
			// store it 
			ans = mid;
			// neglect the right part and check the left part 
			// if the same conditon mathces there also
			e = mid-1;
		}
		// if value at mid is smaller than x then neglect the left part 
		// and check in the right part.
		// else if(arr[mid] < x){
		// We can also remove the else if conditon just goto else if is false.
		else
			s = mid+1;
		mid = s+(e-s)/2;
	}
	return ans;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int x;
    cin >> x;
    cout << lowerBoundBS(arr,6,x);
    return 0;
}