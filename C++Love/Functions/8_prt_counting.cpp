#include<iostream>
using namespace std;

// function signature
void printCounting(int num){
    // cout << n;//can't print main fn n here it is out of scope.
    // function body
    for (int i = 1; i <=num;i++){
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int n ;
    cin >> n;
    // function call
    printCounting(n);
    return 0;
}