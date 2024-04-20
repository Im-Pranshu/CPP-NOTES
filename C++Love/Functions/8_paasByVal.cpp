#include<iostream>
using namespace std;

void dummy(int n){
    n++;// it will do increment only inside dummy. 
    cout << "Number n is : " << n << endl;
}

int main()
{
    int n;
    cin >> n;
    dummy(n);
    cout << "Number is : " << n << endl;
    
    return 0;
}