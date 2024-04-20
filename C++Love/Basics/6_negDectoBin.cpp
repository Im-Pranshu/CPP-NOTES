#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // My soln : -ve Decimal no. to binary conversion 
    int dec,n;
    cout<<"Enter a negative decimal no : ";
    cin>>n;
    dec = n;
    int i=0,ans=0;
    if (n<0){
        //if no is negative do this to convert binary.
        int temp = 1;
        // yha per 10 tak is 10 per loop is liye khatam kara hai kuki 10 se uper jaenge to int max se bada ho jaega 11 digit or ye jo binary number generate hoga niche calculation karke computer usko bhi to binary me convert karta hai hai jo ki 32 bit se bada ho jaega agar hum 10 digit se jada ki value store krate hai to jo ki int ki capacity ke bahar hai. and largest 10 digit number yani ki INT_MAX = 2147483647 ye hai isse bada number nahi dal skt hum int me. or ye number khud bhi binary me convert hota hai tab store hota hai. jo ki 2^31-1 hota hai in terms of bit.
        while(temp<=10){
            // n ki last bit se and karo aur and karne me jo single bit mile usko store krlo digit me.
            int digit = n & 1;
            cout<<"n : "<<n<<endl;
            cout<<"digit = n & 1 : "<<digit<<endl;
            //ans me uper mili bit ko as it is store krlo niche wale formula ko use karke. and agli bit jab abhi jo bit hai uske piche lgate jao yani ki jo bits aa rhi hai unko reverse order me store krte chalo. yani ki store right to left.
            ans = (digit * pow(10,i))+ans; // concatenating bits in reverse flow means store bits from right to left.
            cout<<"ans = digit*pow(10,i) + ans at i = "<<i<<" is : "<<ans<<endl;
            // left wali bits ko right me shift krdo and jo sbse left me hai wo bit ek nyii add krlo
            n=n>>1; 
            cout<<"n after right shit : "<<n<<endl;
            i++; // increment i
            cout<<"i++ : "<<i<<endl;
            temp++; // increment loop counter.
            cout<<"temp++ : "<<temp<<endl;
        }
    }
    else{
        //convert n to binary if it is positive.
        while(n!=0){
            int bit = n&1;
            ans = (bit*pow(10,i))+ans;// concatenate bits from right to left.
            n = n>>1;
            i++;
            cout<<ans<<endl;
        }
    }
    cout<<dec<<" in binary : "<<ans<<endl;

    // Babbar khatarnak soln : -ve Decimal no. to binary conversion
    // unsigned long long int i=0,ans=0;
    // long long int n,dec;
    // cout<<"Enter a negative decimal no : ";
    // cin>>n;
    // dec = n;
    // // i didn't understood why this if is added here ?
    // if(n<0){
    //     // why we are adding 2 power 16 in n ?
    //     n = pow(2,16) + n;
    // }
    // // cout<<n<<endl;
    // while(n!=0){
    //     int bit = n&1;
    //     ans = (bit*pow(10,i))+ans;
    //     n = n>>1;
    //     i++;
    //     cout<<ans<<endl;
    // }
    // cout<<dec<<" in binary : "<<ans<<endl;
}