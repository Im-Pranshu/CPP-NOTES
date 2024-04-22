#include<iostream>
using namespace std;

void print(int *arr, int n){
    cout << "size of Array : " << n << endl;
    cout << "Remaining array : ";
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int getSum(int *arr, int n){
    // base case
    if(n==0) return 0;
    if(n==1) return arr[0];

    // Processing
    print(arr,n);

    int sum = arr[0];
    cout << "When n = " << n << " sum(means-arr[0]) : " << sum << endl;
    // Recursive call
    int arrayRemainingPart = getSum(arr+1,n-1);

    cout << "Array Remaining Part Sum Return : " << arrayRemainingPart << endl;


    sum += arrayRemainingPart;

    return sum;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];   
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int sum = getSum(arr,n);
    cout << "Array Last Part Sum Returned to Main Function: " << sum << endl;

    cout << endl << "Array : ";
    for(auto it:arr)
        cout << it << " ";
    cout << endl;
    cout << "Sum : " << sum;
    
    return 0;
}