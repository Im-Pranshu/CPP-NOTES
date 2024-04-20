#include<bits/stdc++.h>
using namespace std;

// this function finds the count of the digits which divide the n.
void numDivByDig(int n){
	int count=0,temp=n;
	while(temp!=0){
		int dig = temp%10;
		cout << "Digit -> " << dig << "\n";
		temp = temp/10;
		if(dig==0)
			continue;
		if(n%dig==0)
			count++;
	}
	cout << "Given number is evenly divisble by " << count << " Digits." << endl;
}
// 1st method to find the count of no. of digits.
void countDigitMethod1(int n){
	int count=0;
	// simply running the loop until all the digits are extracted.
	while(n!=0){
		n = n/10;// removing 1 digit and counting
		count++;
	}
    cout << "No of digits by method-1 -> " <<count << endl;;
}
// 2nd method to find the count of no. of digits.
void countDigitMethod2(int n){
	string num = to_string(n);// converting number to string and storing its size.
    cout << "No of digits by method-2 -> " << num.length() << endl;
}
// 3rd method to find the count of no. of digits.
void countDigitMethod3(int n){
	int num = (int)(log10(n) + 1);// finding log base 10 of given no which is near to the no of digits of the number and rounding it off to the nearest greater integer to get the exact no of digits.
    cout << "No of digits by method-3 -> " << num << endl;
}

int main(){
    int n;

	cout << "Enter a number : ";
	cin >> n;

	numDivByDig(n);

    countDigitMethod1(n);
	countDigitMethod2(n);
	countDigitMethod3(n);
    return 0;
}