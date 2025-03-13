#include <iostream>
#include <climits>
using namespace std;

int main()
{
    // int n = 123,rev = 0;
    // int temp;
    // // reversing the number.
    // temp = n;
    // while(temp!=0){
    //     int rem = temp%10;
    //     rev = (rev * 10)+rem;
    //     temp = temp/10;
    // }
    // cout<<rev<<endl;;
    // // printing the number digit by digit in the same order as it is stored in n.
    // temp = rev;
    // while(temp!=0){
    //     int rem = temp % 10;
    //     cout<<rem<<" ";
    //     temp = temp / 10;
    // }
    // cout<<INT_MAX<<endl;

    // int count = i;
    // char ch = 'A';
    for (int i = 1; i <= 4; i++)
    {
        // print space
        for (int j = 1; j <= 4 - i; j++)
        {
            cout << "  ";
        }

        // print star
        for (int j = 1; j <= 4 * 2 - 1; j++)
        {
            cout << "*" << " ";
        }

        cout << endl;
    }
}