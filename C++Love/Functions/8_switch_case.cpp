#include<iostream>
using namespace std;

int main()
{
//  Calculator
//     int a,b;
//     char op;
//     cout<<"Enter operand-1 and operand 2 in the same order :-"<<endl;
//     cin>>a>>b;
//     //enter operand
//     cout<<"Enter operand : ";
//     cin>>op;
//     // calculate and print
//     switch(op)
//     {
//         case '+': cout << a << "+" << b << " : " << (a + b) <<endl;
//                   break;
//         case '-': cout << a << "-" << b << " : " << (a - b) <<endl;
//                   break;
//         case '*': cout << a << "*" << b << " : " << (a * b) <<endl;
//                   break;
//         case '/': cout << a << "/" << b << " : " << (a / b) <<endl;
//                   break;
//         default : cout<<"Please enter a valid operator."<<endl;
//                   break;
//    }

    // Note counter
    int amount;
    // Enter amount
    cout << "Enter Amount : ";
    cin >> amount;
    // Start calculation from the note of 100 and i have not used break so all the cases will run i.e. all notes will be calculated.
    switch(100)
    {   
        // Calculating no of notes of 100
        case 100 :  cout << "Notes of 100 : "<<amount/100<<endl;
                  amount = amount - (amount/100)*100;
        
        // Calculating no of notes of 50
        case 50 : cout << "Notes of 50 : "<<amount/50<<endl;
                  amount = amount - (amount/50)*50;

        // Calculating no of notes of 20
        case 20 : cout << "Notes of 20 : "<<amount/20<<endl;
                  amount = amount - (amount/20)*20;

        // Calculating no of notes of 1
        case 1 :  cout << "Notes of 1 : "<<amount/1<<endl;
                  amount = amount - (amount/1)*1;
    }

}