#include<iostream>
#include<vector>
using namespace std;

vector<int> bitManipulation(int num, int i){

    vector<int> ans;
    
    // make ith bit the least significant bit(Right Most Bit) then
    // fetch the ith bit by doing and with 1.
    int ithBit = (num >> i-1) & 1;
    ans.push_back(ithBit);

    // set mask with ith bit set to 1
    int mask = 1;
    mask = mask << i-1;

    // ith bit is set to 
    int setBit = num | mask;
    // store num with setted ith bit.
    ans.push_back(setBit);

    // unsetting ith bit of num now
    int unsetBit = num & ~mask;
    // store num with unsetted ith bit.
    ans.push_back(unsetBit);

    return ans;
}

int main() {
    // k -> kth bit of the 32 bit from LSB.
    int num, k;
    cin >> num >> k;

    vector<int> ans = bitManipulation(num,k);

    cout << "Kth bit of " << num << " : " << ans[0] << endl;
    cout << "After setting Kth bit of " << num << " : " << ans[1] << endl;
    cout << "After unsetting Kth bit of " << num << " : " << ans[2] << endl;
    

    return 0;
}