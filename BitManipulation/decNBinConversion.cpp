#include<iostream>
#include<cmath>
using namespace std;

// reverse the string
void reverse(string& res){
    int i=0, j=res.length()-1;
    while(i<j){
        swap(res[i],res[j]);
        i++;
        j--;
    }
}

// convert decimal to binary
string decToBin(int n){
    
    if(n==0) return "0";

    string res = "";
    // do division as we do manually in note book and store the remainders.
    while(n!=0){
        // if remainder is 1 
        if(n % 2 == 1) 
            res += "1";
        else // if remainder is 0
            res += "0";
        n = n/2;
    }
    
    // reverse the string
    reverse(res);

    return res;
}

// Binary to decimal.
int binToDec(string n){
    int len = n.length();
    int dec = 0, pow = 1;// pow is 1 because 2^0 is 1.
    for(int i=len-1; i>=0; i--){
        // if bit is set(1) then only use it.
        if(n[i] == '1'){
            // dec me pow add karte jao jaha jaha bit set hai.
            dec += pow;
        }
        pow *= 2;// get the next power
    }

    return dec;
}


int main()
{   
    for(int i=0 ; i<10; i++){
        string bin = decToBin(i);
        cout << "Decimal\t-\t" << i << "\t:\t" << bin << endl;
        cout << "Binary\t-\t" << bin << "\t:\t" << binToDec(bin) << endl;
    }


    // Decimal To Binary
    /* Time complexity - O(logn)
         dividing by 2 again again*/
    /* Space Complexity - O(logn)
        each time we divide we store an index so we'll store logn values.*/

    // Binary To Decimal
    /* Time complexity - O(lenOfString)
         will traver whole string*/
    /* Space Complexity - O(1)
        used only a few temp variables.*/
    return 0;
}