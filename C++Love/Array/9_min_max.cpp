#include<iostream>
#include<climits>
using namespace std;

// function to calculat the min value.
int getMin(int num[], int n){
    int mine = INT_MAX;// min will store the largest value or we can also store the largest value manually but it will automatically store the largest value using INT_MAX function.
    // A loops to iterate for all the elements of the array
    for(int i = 0 ; i < n ; i++){
        // Now this if will compare that the value in the min is either greater than or smaller than the num[i].
        if(num[i] < mine){
            mine = num[i];// if value is greater it means that min dont have minimum value so replace it with the smaller value present at num[i].
        }
        // inbuilt function to perform above comparision of the num[i] < mine
        // mine = min(mine,num[i]);// min function compares mine and num[i] and dono me jo minimum hai usko mine me store krdo
    }
    // returing minimum value
    return mine;
}

int getMax(int num[], int n){
    int maxe = INT_MIN;// max will store the smallest value or we can also store the smallest value manually but it will automatically store the smallest value using INT_MIN function.
    // A loops to iterate for all the elemets of the array
    for(int i = 0 ; i < n ; i++){
        // Now this if will compare that the value in the max is either greater than or smaller than the num[i].
        if(num[i] > maxe){
            maxe = num[i];// if value is smaller it means that max dont have maximum value so replace it with the larger value present at num[i].
        }
        // inbuilt function to perform above comparision of the num[i] > maxe
        // maxe = max(maxe,num[i]);// max function compares maxe and num[i] and dono me jo maximum hai usko maxe me store krdo
    }
    // returing maximum value
    return maxe;
}

int main()
{
    int arr[] = {2,3,4,7,12};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Min is " << getMin(arr,size) << endl;
    cout << "Max is " << getMax(arr,size) << endl;
    return 0;
}