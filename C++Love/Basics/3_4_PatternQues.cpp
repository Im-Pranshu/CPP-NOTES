#include <iostream>
using namespace std;

// Pattern Questions solved by PRANSHU

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

void pattern9(int n)
{
    // Pattern 9
    // 1
    // 2 3
    // 3 4 5
    // 4 5 6 7
    // Approach 1
    int i, j, value;
    i = 1;
    while (i <= n)
    {
        j = 1, value = i;
        while (j <= i)
        {
            cout << value << " "; // in 2nd approach we wont use value variable.
            value++;
            j++;
        }
        cout << endl;
        i++;
    }

    // Approach 2
    // int i,j;
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
}

void pattern10(int n)
{
    // Pattern 10
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1
    int i, j;
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << i - j + 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern11(int n)
{
    // Pattern 11
    // A A A
    // B B B
    // C C C
    int row, col;
    char ch;

    row = 1;
    while (row <= n)
    {
        col = 1, ch = 'A' + row - 1;
        while (col <= n)
        {
            cout << ch << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}

void pattern12(int n)
{
    //  Pattern 12
    // A B C
    // A B C
    // A B C
    int i, j, n;
    char ch;

    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            ch = 'A' + j - 1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern13(int n)
{
    // Pattern 13
    // A B C
    // D E F
    // G H I
    int i, j;
    char ch = 'A';

    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern14(int n)
{
    // Pattern 14
    // A B C
    // B C D
    // C D E
    int i, j;
    char ch;

    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            ch = 'A' + i + j - 2;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    // Approach 2 using approach of pattern 18
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
}

void pattern15(int n)
{
    // Pattern 15
    // A
    // B B
    // C C C
    int i, j;
    char ch;

    i = 1;
    while (i <= n)
    {
        j = 1;
        ch = 'A' + i - 1;
        while (j <= i)
        {
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern16(int n)
{
    // Pattern 16
    // A
    // B C
    // D E F
    // G H I J
    int i, j;
    char ch = 'A';

    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern17(int n)
{
    // Pattern 17
    // A
    // B C
    // C D E
    // D E F G
    int i, j;
    char ch;

    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            ch = 'A' + i + j - 2;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern18(int n)
{
    // Pattern 18
    // D
    // C D
    // B C D
    // A B C D
    int i, j;
    char start;

    i = 1;
    while (i <= n)
    {
        j = 1;
        start = 'A' + n - i;
        while (j <= i)
        {
            cout << start << " ";
            start++;
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern19(int n)
{
    // New Type Pattern With spaces. Pattern 19
    //       *
    //     * *
    //   * * *
    // * * * *
    int i, j, space;

    i = 1;
    while (i <= n)
    {
        // Printing space
        space = n - i;
        while (space) // jab tak space ki val decrement hoke 0 nahi hogi chlega.
        {
            cout << "  ";
            space--;
        }
        // Printing stars
        j = 1;
        while (j <= i)
        {
            cout << "*" << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern20(int n)
{
    // Pattern 20
    // * * * *
    // * * *
    // * *
    // *
    int i, star;

    i = 1;
    while (i <= n)
    {
        star = n - i + 1;
        while (star)
        {
            cout << "*" << " ";
            star--;
        }
        cout << endl;
        i++;
    }
}

void pattern21(int n)
{
    // Pattern 21
    // * * * *
    //   * * *
    //     * *
    //       *
    int i, stars, spaces;

    i = 1;
    while (i <= n)
    {
        // counting and printing spaces
        spaces = i - 1;
        while (spaces)
        {
            cout << "  ";
            spaces--;
        }
        // counting and printing stars.
        stars = n - i + 1;
        while (stars)
        {
            cout << "*" << " ";
            stars--;
        }
        cout << endl;
        i++;
    }
}

void pattern22(int n)
{
    // Pattern 22
    // 1 1 1 1
    //   2 2 2
    //     3 3
    //       4
    int i, j, spaces;

    i = 1;
    while (i <= n)
    {
        // counting and printing spaces.
        spaces = i - 1;
        while (spaces)
        {
            cout << "  ";
            spaces--;
        }
        // printing number. above question 21 can also be printed like this and this question canbe printed like above.
        j = i;
        while (j <= n)
        {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern23(int n)
{
    // Pattern 23
    //       1
    //     2 2
    //   3 3 3
    // 4 4 4 4
    int i, j, spaces;

    i = 1;
    while (i <= n)
    {
        // counting and printing spaces.
        spaces = n - i;
        while (spaces)
        {
            cout << "  ";
            spaces--;
        }
        // printing number.
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

void pattern24(int n)
{
    // Pattern 24
    //       1
    //     2 3
    //   4 5 6
    // 7 8 9 10
    int i, j, spaces, value;

    i = 1;
    value = 1;
    while (i <= n)
    {
        // counting and printing spaces.
        spaces = n - i;
        while (spaces)
        {
            cout << "  ";
            spaces--;
        }
        // printing number.
        j = 1;
        while (j <= i)
        {
            cout << value << " ";
            value++;
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern25(int n)
{
    // Pattern 25
    //       1
    //     1 2 1
    //   1 2 3 2 1
    // 1 2 3 4 3 2 1
    int i, j, spaces, start;

    i = 1;
    while (i <= n)
    {
        // space print karo(1st triangle)
        spaces = n - i;
        while (spaces)
        {
            cout << "  ";
            spaces--;
        }
        // 2nd triangle print
        j = 1;
        while (j <= i)
        {
            cout << j << " ";
            j++;
        }
        // 3rd triangle print
        start = i - 1;
        while (start)
        {
            cout << start << " ";
            start--;
        }
        cout << endl;
        i++;
    }
}

void pattern26(int n)
{
    // Pattern 26
    // 1 2 3 4
    //   2 3 4
    //     3 4
    //       4
    int i, j, spaces;

    i = 1;
    while (i <= n)
    {
        // spaces count n print
        spaces = i - 1;
        while (spaces)
        {
            cout << "  ";
            spaces--;
        }
        // print
        j = i;
        while (j <= n)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern27(int n)
{
    // Pattern 27 - HW.
    // 1 2 3 4 5 5 4 3 2 1
    // 1 2 3 4 * * 4 3 2 1
    // 1 2 3 * * * * 3 2 1
    // 1 2 * * * * * * 2 1
    // 1 * * * * * * * * 1

    int i, j;

    i = 1;
    while (i <= n)
    {
        // 1st triangle print
        j = 1;
        while (j <= n - i + 1)
        {
            cout << j << " ";
            j++;
        }
        // 2nd triangle print
        j = i - 1;
        while (j >= 1)
        {
            cout << "* ";
            cout << "* ";
            j--;
        }

        // 2nd triangle can also be written as:- using (i-1)*2 as ending limit of each row element which starts from 1.
        j = 1;
        while (j <= (i - 1) * 2)
        {
            cout << "* ";
            j++;
        }

        // 3rd triangle print
        j = n - i + 1;
        while (j)
        {
            cout << j << " ";
            j--;
        }
        cout << endl;
        i++;
    }
}

void pattern28(int n)
{
    // pattern 28
    //     *
    //    ***
    //   *****
    //  *******
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

void pattern29(int n)
{
    // Pattern 29
    // 1
    // 0 1
    // 1 0 1
    // 0 1 0 1
    int bit = 1;
    for (int i = 1; i <= n; i++)
    {
        // flip bits as even row or odd row
        i % 2 == 0 ? bit = 0 : bit = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << bit << " ";
            // flip bits in each iteration
            bit = 1 - bit;
        }
        cout << endl;
    }
}

void pattern30(int n)
{
    // Pattern 30
    // 1             1
    // 1 2         2 1
    // 1 2 3     3 2 1
    // 1 2 3 4 4 3 2 1

    // for 2nd way of space print
    // int space = 2 * (n - 1);

    for (int i = 1; i <= n; i++)
    {
        // no. pattern 1
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        // better way
        // spaces - 2*(n-i) bcz 2 bar same pattern print kardo that's it
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << "  ";
        }

        // // another way of space print
        // for (int j = 0; j < space; j++)
        // {
        //     cout << "  ";
        // }

        // no. pattern 2
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
        // space -= 2;
    }
}

void pattern31(int n)
{
    // Pattern 31
    //     A
    //   A B A
    // A B C B A

    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }

        // stars
        char ch = 'A';
        // symmetry breaks here - now decrement char
        int breakpoint = (2 * i - 1) / 2;
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << ch << " ";
            // if break symmetry then decrement.
            (j <= breakpoint) ? ch++ : ch--;
        }
        cout << endl;
    }
}

void pattern32(int n)
{
    // Pattern 32
    // E
    // D E
    // C D E
    // B C D E
    // A B C D E
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A' + n - i; // A + 4 - 1 = E
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}

void pattern33(int n)
{
    // Pattern 33
    // * * * * * *
    // * *     * *
    // *         *--- after this it's symettrical
    // *         *
    // * *     * *
    // * * * * * *

    int spaces = 0;

    for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < spaces; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }

        spaces += 2;
        cout << endl;
    }

    spaces = 2 * (n - 1);

    for (int i = 1; i <= n; i++)
    {
        // stars
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < spaces; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }

        spaces -= 2;
        cout << endl;
    }
}

void pattern34(int n)
{
    /* Pattern 34
    // *         *
    // * *     * *
    // * * * * * *
    // * *     * *
    // *         *
    */
    int spaces = 2 * (n - 1);
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        // stars
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }

        // spaces
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }

        (i < n) ? spaces -= 2 : spaces += 2;

        // stars
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern35(int n)
{
    /* Pattern 35
    // *****
    // *   *
    // *   *
    // *   *
    // *****
    */
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // stars
            if (i == 1 || i == n || j == 1 || j == n)
            {
                cout << "* ";
            }
            // spaces
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void pattern36(int n)
{
    /* Pattern 36
    // 3 3 3 3 3
    // 3 2 2 2 3
    // 3 2 1 2 3
    // 3 2 2 2 3
    // 3 3 3 3 3
    */
    for (int i = 0; i < 2 * n - 1; i++)
    {
        // number
        for (int j = 0; j < 2 * n - 1; j++)
        {
            // find distance of current value from all directions
            int top = i;                // current row is distance from top
            int bottom = 2 * n - 2 - i; // current row is distance from bottom
            int left = j;               // current column is distance from left
            int right = 2 * n - 2 - j;  // current column is distance from right

            int distance = min(top, min(bottom, min(left, right))); // find min distance from all directions

            // calculate answer by subtracting distance from n
            cout << n - distance << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    pattern36(n);
}