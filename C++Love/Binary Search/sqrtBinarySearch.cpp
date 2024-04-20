#include<iostream>
using namespace std;

// this function will calculate the integer part of the square root.
long long int integerPart(int num){
        int s=0;
        int e=num;
        long long int mid = s+(e-s)/2;
        long long int ans=0;
        while(s<=e){
            long long int square = mid*mid;
            if(square > num)
                e = mid-1;
            else if(square <= num){
                ans = mid;
                s = mid+1;
            }
            mid = s+(e-s)/2;
        }
        return ans;
}

// this function will calculate the float part of the square root.
double morePrecision(int num, int precision , int intPart){
    double factor = 1;
    double ans = intPart;
    for(int i=0; i<precision; i++){
        factor = factor/10;// like -> 0.1,0.2,0.3 upto precision

        // here loop will start from intPart of sqroot and will run until (intPart)^2 < num and keep incrementing the factor part in the ans untill the loop condition is satisfied.
        for(double j = ans; j*j<num; j+=factor){ 
            ans = j;
        }
    }
    return ans;
}


int main()
{
    int n;
    cout << "Enter a number :- ";
    cin >> n;
    

    // Finding sqroot till integer part only.
    int intPart = integerPart(n);

    // finding sqroot with more precision of floating point
    double mPrecisionInt = morePrecision(n,3,intPart);
    cout << "Answer in float is " << mPrecisionInt << endl;
    return 0;
}