// What is Upper Bound?
// The upper bound algorithm finds the first or 
// the smallest index in a sorted array where 
// the value at that index is greater than the given key i.e. x.
// The upper bound is the smallest index, ind, where arr[ind] > x.

// But if any such index is not found, the upper bound algorithm
// returns n i.e. size of the given array. The main difference
// between the lower and upper bound is in the condition.
// For the lower bound the condition was arr[ind] >= x and here
// ,in the case of the upper bound, it is arr[ind] > x.

#include<bits\stdc++.h>
using namespace std;

int upperBoundBS(int arr[],int n, int x){
// ***************Brute force Approach***************
    // for(int i=0; i<n; i++){
    // // as it encounters the greater or equal element to the key
    // //  it'll stop and return i.
    //     if(arr[i]>x) return i;
    // }
    // // if all elements are smaller than x lower bound is n.
    // return n;

// ***************Binary Search Approach***************
    int s=0,e=n -1;
	int mid = s+(e-s)/2;
	// initialising with 1 so that 
	// if all elements are smaller than x then return n.
	int ans = n;
	while(s<e){
		// if mid > 0 then it may be the answer
		if(arr[mid] > x){
			// store it 
			ans = mid;
			// neglect the right part and check the left part 
			// if the same conditon mathces there also
			e = mid-1;
		}
		// if value at mid is smaller than or equal to x 
        // then neglect the left part 
		else if(arr[mid] < x){
		    // then check in the right part.
			s = mid+1;
		}
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
    cout << upperBoundBS(arr,6,x);
    return 0;
}