#include<iostream>
using namespace std;

// approach - 1 : Making copy of value
// void merge(int *arr, int s, int e) {
//     int mid = (s+e)/2;
//     int len1 = mid - s + 1;
//     int len2 = e - mid;
//     int *first = new int[len1];
//     int *second = new int[len2];
//     //copy values
//     int mainArrayIndex = s;
//     for(int i=0; i<len1; i++) {
//         first[i] = arr[mainArrayIndex++];
//     }
//     mainArrayIndex = mid+1;
//     for(int i=0; i<len2; i++) {
//         second[i] = arr[mainArrayIndex++];
//     }
//     //merge 2 sorted arrays     
//     int index1 = 0;
//     int index2 = 0;
//     mainArrayIndex = s;
//     while(index1 < len1 && index2 < len2) {
//         if(first[index1] < second[index2]) {
//             arr[mainArrayIndex++] = first[index1++];
//         }
//         else{
//             arr[mainArrayIndex++] = second[index2++];
//         }
//     }   
//     while(index1 < len1) {
//         arr[mainArrayIndex++] = first[index1++];
//     }
//     while(index2 < len2 ) {
//         arr[mainArrayIndex++] = second[index2++];
//     }
//     delete []first;
//     delete []second;
// }

// Approach 2 : without making copy of values.
// Merge two sorted subarrays into a single sorted subarray
void merge(int *arr, int s, int e) {
    // Calculate the midpoint of the subarray
    int mid = s + (e-s)/2;

    // Initialize indices for the left and right halves
    int index1 = s; // index for the left half
    int index2 = mid+1; // index for the right half

    // Initialize an index for the temporary array
    int index = 0;

    // Create a temporary array to store the merged subarray
    int* temp = new int[e-s+1]; // allocate memory for the temporary array

    // Merge the left and right halves into the temporary array
    while(index1 <= mid && index2 <= e) {
        // Compare the current elements of the left and right halves
        if(arr[index1] < arr[index2]) {
            // If the left element is smaller, add it to the temporary array
            temp[index++] = arr[index1++];
        }
        else{
            // If the right element is smaller, add it to the temporary array
            temp[index++] = arr[index2++];
        }
    }   

    // Add any remaining elements from the left half to the temporary array
    while(index1 <= mid) {
        temp[index++] = arr[index1++];
    }

    // Add any remaining elements from the right half to the temporary array
    while(index2 <= e) {
        temp[index++] = arr[index2++];
    }

    // Copy the merged subarray back into the original array
    for(int i=s; i<=e; i++){
        arr[i] = temp[i-s]; // copy the elements from the temporary array to the original array
    }

    // why doing i-s ?
    // For example, if s = 3 and e = 7, the temporary array temp would have indices 0 to 4, and the original array arr would have indices 3 to 7. By doing i-s, we would get:
    // i = 3, i-s = 0, so arr[3] = temp[0]
    // i = 4, i-s = 1, so arr[4] = temp[1]
    // i = 5, i-s = 2, so arr[5] = temp[2]

    // Deallocate the temporary array
    delete []temp;
}


void mergeSort(int *arr, int s, int e) {

    //base case
    if(s >= e) {
        return;
    }
    
    int mid = (s+e)/2;

    //left part sort karna h 
    mergeSort(arr, s, mid);
    
    //right part sort karna h 
    mergeSort(arr, mid+1, e);

    //merge
    merge(arr, s, e);

}

int main() {

    int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int n = 15;

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;

    mergeSort(arr, 0, n-1);

    cout << "Sorted Array : ";

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}