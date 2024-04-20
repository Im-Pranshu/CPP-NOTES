#include<iostream>
using namespace std;

// 1 -> Prime
// 0 -> Not Prime
bool isPrime(){
    int num;
    cout << "Enter number : ";
    cin >> num;
    for (int i = 2; i < num ; i++){
        // divide ho gya to , Prime nahi hai
        if (num%i==0){
            return 0;
        }
    }
    // divide nahi hua hoga tabhi yaha ayega , yani prime hai.
    return 1;
}

int main()
{
    // agar prime hai to 1 aya hoga yani conditon true i.e. prime , varna false yani not prime.
    if(isPrime()){
        cout << "Number is Prime.";
    }
    else{
        cout << "Number is not Prime.";
    }

    return 0;
}