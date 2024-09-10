#include<bits/stdc++.h>

using namespace std;

void reverseString(string &str){
    
    string temp = "";// ans
    string t = "";// temp string

    for(int i=0; i<str.length(); i++){
        // jab tak space nahi ata word ko store karo
        if(str[i] != ' '){
           t = t+str[i];
        }
        else{// jese hi space mil jae
            reverse(t.begin(),t.end());//word ko reverse karo
            temp += t+" ";// temp me store karo
            t="";// t ko fir se empty krdo next word ke liye.
        
        }
    }

    // handled last word separately
    if(!t.empty()){
        reverse(t.begin(),t.end());
        temp += t+" ";
    }

    str  = temp;
    
}

int main()
{
    string s;
    // Use getline() to take input with spaces
    getline(cin,s);

    cout<< "String Before Reverse " << endl << s << endl;

    reverseString(s);

    cout<< "String After Reverse " << endl << s << endl;

    return 0;
}