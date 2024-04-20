#include<iostream>
using namespace std;

void sayDigits(int num, string arr[]){
    // Base Case
    if (num == 0) return;

    // Processing
    int digit = num%10;// extract digit.
    num = num/10;// remove extracted digit.

    // Recursive Call
    sayDigits(num, arr);

    // Processing -> Printing values after making all recursive calls.
    cout << arr[digit] << " ";
}

int main()
{
    int num;
    cin >> num;
    
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

    sayDigits(num , arr);

    return 0;
}