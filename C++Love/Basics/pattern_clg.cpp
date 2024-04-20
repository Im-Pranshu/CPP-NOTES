#include<iostream>
using namespace std;
int main(){

    /* Pattern :->
        *         * * * * *
        * *       * * * *  
        * * *     * * *     
        * * * *   * *      
        * * * * * *        
                * * * * * *
              * *   * * * *
            * * *     * * *
          * * * *       * *
        * * * * *         *
    */

    // int n;
    // cin >> n;
    // // First Part
    // for(int row = 1; row <= n; row++)
    // {
    //     // Printing Triangle 1
    //     for(int col = 1; col <= row; col++){
    //         cout<<"* ";
    //     }
    //     // Printing Space
    //     for (int space = n - row; space; space--)
    //     {
    //         cout<<"  ";
    //     }
    //     // Printing Triangle 2
    //     for (int col = 1; col <= n - row + 1; col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // // Second Part
    // for (int row = 1; row <= n ; row++){
    //     // Printing Spaces for triangle 3
    //     for(int space = n - row;space;space--){
    //         cout<<"  ";
    //     }
    //     // Printing triangle 3
    //     for (int col = 1; col <= row ; col++){
    //         cout<<"* ";
    //     }
    //     // Printing space for triangle 4
    //     for (int space = row-1; space ; space--){
    //         cout<<"  ";
    //     }
    //     // Printing triangle 4
    //     for (int col = 1; col <= n - row + 1; col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // common Code to print any alphabet number or whatever.
    // for (int row = 0; row < 7; row++)
    // {
    //     for (int col = 0; col < 5; col++)
    //     {
    //         if ()
    //         {
    //             cout<<"* ";
    //         }else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // Printing A using loop
    // for (int row = 0; row < 7; row++)
    // {
    //     for (int col = 0; col < 5; col++)
    //     {
    //         if (((col == 0 || col == 4) && (row != 0) ) || ((row == 0 || row == 3) && (col > 0 && col < 4)))
    //         {
    //             cout<<"* ";
    //         }else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // Printing V using loop
    int i = 0,j=8;
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 9; col++)
        {
            if (row == col )
            {
                cout<<"* ";
            }
            else if((row == i && col == j))
            {
                cout<<"* ";
                i++;
                j--;
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    
}