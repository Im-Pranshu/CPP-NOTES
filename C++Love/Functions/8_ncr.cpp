#include<iostream>
using namespace std;
// fn to calculate factorial.
int factorial(int num){
    int fact = 1;
    for (int i = 1; i <= num ; i++){
        fact = fact * i;
    }
    return fact;
}
// fn to calculate nCr.
int nCr(int n , int r){
    int ncr = ((factorial(n))/((factorial(r)*factorial(n-r))));
    return ncr;
}

int main()
{
    int n , r;
    cout<<"Enter n and r to get nCr : ";
    cin >> n >> r;
    // printing nCr
    cout << "nCr : " <<nCr(n,r) << endl;
    return 0;
}