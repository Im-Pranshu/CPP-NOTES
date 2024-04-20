#include<iostream>
using namespace std;

int main()
{
    //wap to input age and tell if ur adult
    // int age;
    // cin >> age;
    // if(age < 18){
    //     cout << "You're not an adult.\n";
    // }else if(age == 18 || age <= 100) {
    //     cout << "You're an adult.\n";
    // }
    // else{
    //     cout << "You're a ghost.\n";
    // }


    /*
    A school has a grading system :
    a.If marks are less than 25, it prints “Grade: F.”
    b.If marks are between 25 and 44 (inclusive), it prints “Grade: E.”
    c.If marks are between 45 and 49 (inclusive), it prints “Grade: D.”
    d.If marks are between 50 and 59 (inclusive), it prints “Grade: C.”
    e.If marks are between 60 and 79 (inclusive), it prints “Grade: B.”
    f.If marks are between 80 and 100 (inclusive), it prints “Grade: A.”
    g.If marks are outside the valid range, it prints “Invalid marks entered.”
    ask user to enter marks and print acc to marks
    */
    int marks;
    cin >> marks;
    // if(marks < 25){
    //     cout << "F";
    // }
    // if (marks >= 25 && marks <= 44){
    //     cout << "E";
    // }
    // if (marks >= 45 && marks <= 49){
    //     cout << "D";
    // }
    // if (marks >= 50 && marks <= 59){
    //     cout << "C";
    // }
    // if (marks >= 60 && marks <= 79){
    //     cout << "B";
    // }
    // if (marks >= 80 && marks <= 100){
    //     cout << "A";
    // } 

    //above code is very timetaking checking condition again and again because all the if are getting executed. better to use like below ->

    if(marks < 25){ // if its true no below code is executed.
        cout << "F";
    }
    else if (marks <= 44){ // above condition become false then only we'll come on this case then no need to again check the condition that marks are whether 25 or greater than it because we are sure here iteration will only come when no will be greater than 25 or 25. 
    // and same for the all below.
        cout << "E";
    }
    else if (marks <= 49){
        cout << "D";
    }
    else if (marks <= 59){
        cout << "C";
    }
    else if (marks <= 79){
        cout << "B";
    }
    else if (marks <= 100){
        cout << "A";
    } 

    return 0;
}