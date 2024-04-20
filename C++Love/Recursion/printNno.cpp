#include<iostream>
using namespace std;

void print(int n){
// Tail Recursion -> Print in decreasing order.

// it first does processing then makes recursive call

    // // Base Case
    // if (n==0) return;
    // // Processing
    // cout << n << " ";
    // // Recursive Call
    // print(n-1);


// Head Recursion -> Print in increasing order.

// it first makes recursive call then do processing.

    // Base Case
    if(n==0) return;
    // Recursive Relation
    print(n-1);
    // Processing
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;

    print(n);

    return 0;
}