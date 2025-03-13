#include <iostream>
using namespace std;

void pattern1(int n)
{
    // Pattern 1 : equal rows and col same thing patterned
    // sample
    // * *
    // * *

    // var for row
    int i = 1;

    while (i <= n)
    {
        // var for column
        int j = 1;
        while (j <= n)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern2(int n)
{
    // Pattern 2 : equal rows and col
    // sample
    // 1 1 1
    // 2 2 2
    // 3 3 3
    int i, j;

    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern3(int n)
{
    // Patter 3 - Sample :
    // 1 2 3
    // 1 2 3
    // 1 2 3
    int i, j;

    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern4(int n)
{
    // Pattern 4 - Sample:
    // 3 2 1
    // 3 2 1
    // 3 2 1
    int i, j;

    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << n - j + 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern5(int n)
{
    // Pattern 5
    // 1 2 3
    // 4 5 6
    // 7 8 9
    int i, j, count;

    i = 1;
    count = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern6(int n)
{
    // Pattern 6
    // *
    // * *
    // * * *
    // * * * *
    int i, j;

    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern7(int n)
{
    // Pattern 7
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    int i, j;

    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern8(int n)
{
    // Pattern 8
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    int i, j, count;

    i = 1;
    count = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}

// pattern 28
//     *
//    ***
//   *****
//  *******
void pattern28(int n)
{

    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        // stars
        for (int k = 0; k < 2 * i - 1; k++)
        {
            cout << "*";
        }

        // space
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{

    // Pattern Questions.
    int n;
    cin >> n;

    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    pattern28(n);

    // Pattern 9
    // 1
    // 2 3
    // 3 4 5
    // 4 5 6 7
    // Approach 1
    // int i,j,n,value;
    // cin>>n;
    // i = 1;
    // while(i<=n){
    //     j = 1,value = i;
    //     while(j<=i){
    //         cout<<value<<" ";//in 2nd approach we wont use value variable.
    //         value++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // Approach 2
    // int i,j,n;
    // cin>>n;
    // i = 1;
    // while(i<=n){ i <= 3
    //     j = i;           //j=1 ,    j=2   ,     j = 3
    //     while(j<i*2){    //1<2 ,  2<4,3<4 , 3<6,4<6,5<6
    //         cout<<j<<" ";// 1  ,    2 3   ,    3 4 5
    //         j++;         //2(LB),  3 4(LB) ,    4 5(Loop Breaks)
    //     }
    //     cout<<endl;
    //     i++; //           2    ,     3    ,     4(Loop breaks)
    // }

    // Pattern 10
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1
    // int i , j , n;
    // cin>>n;
    // i = 1;
    // while(i<=n){
    //     j = 1;
    //     while(j<=i){
    //         cout<<i-j+1<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // Pattern 11
    // A A A
    // B B B
    // C C C
    // int row,col,n;
    // char ch;
    // cin>>n;
    // row = 1;
    // while(row<=n){
    //     col = 1,ch = 'A' + row - 1;
    //     while(col<=n){
    //         cout<<ch<<" ";
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    //  Pattern 12
    // A B C
    // A B C
    // A B C
    // int i , j, n;
    // char ch;
    // cin>>n;
    // i = 1;
    // while(i<=n){
    //     j = 1 ;
    //     while(j<=n){
    //         ch = 'A'+ j-1;
    //         cout<<ch<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // Pattern 13
    // A B C
    // D E F
    // G H I
    // int i,j,n;
    // char ch = 'A';
    // cin>>n;
    // i = 1;
    // while(i<=n){
    //     j=1;
    //     while(j<=n){
    //         cout<<ch<<" ";
    //         ch++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // Pattern 14
    // A B C
    // B C D
    // C D E
    // int i,j,n;
    // char ch;
    // cin>>n;
    // i = 1;
    // while (i<=n)
    // {
    //     j = 1;
    //     while (j<=n)
    //     {
    //         ch = 'A' + i + j - 2;
    //         cout<<ch<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // Problem 14 Approach 2 using approach of pattern 18
    // A B C
    // B C D
    // C D E
    // int n,i,j;
    // char start;
    // cin>>n;
    // i=1;
    // while(i<=n){
    //     j=1;
    //     start = 'A' + i - 1;
    //     while(j<=n){
    //         cout<<start<<" ";
    //         start++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // Pattern 15
    // A
    // B B
    // C C C
    // int i , j , n;
    // char ch;
    // cin>>n;
    // i = 1;
    // while(i<=n){
    //     j = 1;
    //     ch = 'A' + i - 1;
    //     while(j<=i){
    //         cout<<ch<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // Pattern 16
    // A
    // B C
    // D E F
    // G H I J
    // int n,i,j;
    // char ch = 'A';
    // cin>>n;
    // i=1;
    // while(i<=n){
    //     j=1;
    //     while(j<=i){
    //         cout<<ch<<" ";
    //         ch++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // Pattern 17
    // A
    // B C
    // C D E
    // D E F G
    // int i,j,n;
    // char ch;
    // cin>>n;
    // i=1;
    // while(i<=n){
    //     j=1;
    //     while(j<=i){
    //         ch = 'A'+i+j-2;
    //         cout<<ch<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // Pattern 18
    // D
    // C D
    // B C D
    // A B C D
    // int i,j,n;
    // char start;
    // cin>>n;
    // i = 1;
    // while(i<=n){
    //     j=1;
    //     start = 'A' + n - i;
    //     while(j<=i){
    //         cout<<start<<" ";
    //         start++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // New Type Pattern With spaces. Pattern 19
    //       *
    //     * *
    //   * * *
    // * * * *
    // int i,j,n,space;
    // cin>>n;
    // i = 1;
    // while(i<=n){
    // Printing space
    //     space = n - i;
    //     while (space)//jab tak space ki val decrement hoke 0 nahi hogi chlega.
    //     {
    //         cout<<"  ";
    //         space--;
    //     }
    // Printing stars
    //     j = 1;
    //     while(j<=i){
    //         cout<<"*"<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // Pattern 20
    // * * * *
    // * * *
    // * *
    // *
    // int i,star,n;
    // cin>>n;
    // i = 1;
    // while(i<=n){
    //     star = n-i+1;
    //     while(star){
    //         cout<<"*"<<" ";
    //         star--;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // Pattern 21
    // * * * *
    //   * * *
    //     * *
    //       *
    // int i,stars,spaces,n;
    // cin>>n;
    // i = 1;
    // while(i<=n){
    //     // counting and printing spaces
    //     spaces = i -1;
    //     while(spaces){
    //         cout<<"  ";
    //         spaces--;
    //     }
    //     // counting and printing stars.
    //     stars = n-i+1;
    //     while(stars){
    //         cout<<"*"<<" ";
    //         stars--;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // Pattern 22
    // 1 1 1 1
    //   2 2 2
    //     3 3
    //       4
    // int i , j , n, spaces;
    // cin>>n;
    // i=1;
    // while(i<=n)
    // {
    //     // counting and printing spaces.
    //     spaces = i-1;
    //     while(spaces)
    //     {
    //         cout<<"  ";
    //         spaces--;
    //     }
    //     // printing number. above question 21 can also be printed like this and this question canbe printed like above.
    //     j = i;
    //     while(j<=n)
    //     {
    //         cout<<i<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // Pattern 23
    //       1
    //     2 2
    //   3 3 3
    // 4 4 4 4
    // int i , j , n, spaces;
    // cin>>n;
    // i=1;
    // while(i<=n)
    // {
    //     // counting and printing spaces.
    //     spaces = n-i;
    //     while(spaces)
    //     {
    //         cout<<"  ";
    //         spaces--;
    //     }
    //     // printing number.
    //     j = 1;
    //     while(j<=i)
    //     {
    //         cout<<i<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // Pattern 24
    //       1
    //     2 3
    //   4 5 6
    // 7 8 9 10
    // int i , j , n, spaces,value;
    // cin>>n;
    // i=1;
    // value = 1;
    // while(i<=n)
    // {
    //     // counting and printing spaces.
    //     spaces = n-i;
    //     while(spaces)
    //     {
    //         cout<<"  ";
    //         spaces--;
    //     }
    //     // printing number.
    //     j = 1;
    //     while(j<=i)
    //     {
    //         cout<<value<<" ";
    //         value++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // Pattern 26
    // 1 2 3 4
    //   2 3 4
    //     3 4
    //       4
    // int n,i,j,spaces;
    // cin>>n;
    // i=1;
    // while(i<=n)
    // {
    //     //spaces count n print
    //     spaces=i-1;
    //     while(spaces)
    //     {
    //         cout<<"  ";
    //         spaces--;
    //     }
    //     //print
    //     j = i;
    //     while(j<=n)
    //     {
    //         cout<<j<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // Pattern 25
    //       1
    //     1 2 1
    //   1 2 3 2 1
    // 1 2 3 4 3 2 1
    // int i,j,n,spaces,start;
    // cin>>n;
    // i = 1;
    // while(i<=n)
    // {
    //     //space print karo(1st triangle)
    //     spaces=n-i;
    //     while(spaces)
    //     {
    //         cout<<"  ";
    //         spaces--;
    //     }
    //     // 2nd triangle print
    //     j = 1;
    //     while(j<=i)
    //     {
    //         cout<<j<<" ";
    //         j++;
    //     }
    //     // 3rd triangle print
    //     start=i-1;
    //     while(start)
    //     {
    //         cout<<start<<" ";
    //         start--;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // Pattern 27 - HW.
    // 1 2 3 4 5 5 4 3 2 1
    // 1 2 3 4 * * 4 3 2 1
    // 1 2 3 * * * * 3 2 1
    // 1 2 * * * * * * 2 1
    // 1 * * * * * * * * 1

    // int i,j,n;
    // cin>>n;
    // i=1;
    // while (i<=n)
    // {
    //     // 1st triangle print
    //     j=1;
    //     while(j<=n-i+1)
    //     {
    //         cout<<j<<" ";
    //         j++;
    //     }
    //     // 2nd triangle print
    //     j = i - 1;
    //     while(j>=1)
    //     {
    //         cout<<"* ";
    //         cout<<"* ";
    //         j--;
    //     }

    //     // 2nd triangle can also be written as:- using (i-1)*2 as ending limit of each row element which starts from 1.
    // //     j = 1;
    // //     while(j<=(i-1)*2)
    // //     {
    // //         cout<<"* ";
    // //         j++;
    // //     }

    //     // 3rd triangle print
    //     j=n-i+1;
    //     while(j)
    //     {
    //         cout<<j<<" ";
    //         j--;
    //     }
    //     cout<<endl;
    //     i++;
    // }
}