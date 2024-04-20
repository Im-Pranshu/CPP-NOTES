#include<iostream>
using namespace std;
/*
Take the day no. and print the name of the day
for 1 print monday
for 2 print tuesday and so on 7 print Sunday.
*/
int main()
{
    int day;
    cin >> day;
/*
Limited to Integer or Character Types :
    Switch statements are exclusively designed to handle integer or character values. Ensure that the expression provides values of type int or char.
*/
    switch (day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "Invalid";
            break;
    }
    return 0;
}