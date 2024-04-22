#include<iostream>
using namespace std;

void sayDigits(int num, string arr[] , int callCount){
    // Base Case
    
    if (num == 0) return;

    // Processing
    int digit = num%10;// extract digit.
    num = num/10;// remove extracted digit.

    callCount++;
    cout << endl << "Call : " << callCount << endl;

    // Recursive Call
    sayDigits(num, arr,callCount);

    // Processing -> Printing values after making all recursive calls.
    cout << arr[digit] << " ";
}

int main()
{
    int num;
    cin >> num;

    int countCall = 0;

    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

    sayDigits(num , arr,countCall);

    return 0;
}