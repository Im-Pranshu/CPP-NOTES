// #include<iostream>// take input or give o/p we use this library.
// #include<math.h>// to use mathematical fun
// #include<string>// to use the strings
// but we can write #include again & again to avoid this we have : bits/stdc++.h -> it includes all the library.

#include<iostream>// it takes a lot of time to include all library but it is negligible when it is compared to program run time.

using namespace std; // telling to use the namespace std.

int main(){
    // cout is fn that stays inside std namespace
    // std::cout << "ḍ Pranshu!" << std::endl << "Hey Striver!" << std::endl << "Hey C++!!" << std::endl;
    // but using std:: again and again is very annoying so we use using namespace....
    // cout << "Hey Pranshu!" << endl << "Hey Striver!" << endl << "Hey C++!!" << endl;
    // endl and \n both takes to new line....

    // taking inputs and printing
    int x,y;
    cin>>x>>y;
    cout<<"Value of x: "<<x<<" and y: "<<y;
    return 0;
}