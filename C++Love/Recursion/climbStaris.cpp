#include<iostream>
using namespace std;

int countDistinctWayToClimbStair(int nStairs)
{
    //base case
    if(nStairs < 0)  return 0;
    if(nStairs == 0) return 1;
    
    //Recursive Call
    int ans = countDistinctWayToClimbStair(nStairs-1) 
        + countDistinctWayToClimbStair(nStairs-2);
    
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << countDistinctWayToClimbStair(n);
    return 0;
}