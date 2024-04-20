#include <bits/stdc++.h>
using namespace std;

void printStr(string str ,  int n){
    cout << "Input String : {" ;
    for(int i=0; i<n; i++)
    {
        cout << str[i] << " ";
    }   
    cout << "}"<< endl;
}

int main() {

    string str;
    // Inputting stray
    cin >> str;

    printStr(str,str.length());

// In order to get the corresponding value for a character, we will use the following formula:
// corresponding value = given character - 'A'
// eg ASCII Value of a = 97
// so 97 - 'a' = 0 
//    98 - 'a' = 1 -> here 98 is b so similarly we'll get the index for the specific values.
    
    int noOfAlphabets = 25;// if array contains only small alphabets or large alphabets then we we'll need 25 size only.
    // if string is mix of small capital then we need to store 256 size.

    //precompute no of occurences of elements - 
    int hash[noOfAlphabets] = {0};
    for (int i = 0; i < str.length(); i++) {
        hash[str[i] - 'a']++;
    }

// Enter no of queries.
    int q;
    cin >> q;
    
    // Input all the queries.
    while (q--) {
        char c;
        cin >> c;
        // fetching:
        cout << "Occurence of " << c << " : " << hash[c-'a'] << endl;
    }

    return 0;
}