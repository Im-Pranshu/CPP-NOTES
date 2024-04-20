// Question 1. Generate an ap series : 3 * n + 7
// #include<iostream>
// using namespace std;
// int ap(int n){
//     int aps = (3 * n )+ 7;
//     return aps;
// }
// int main(){
//     int n;
//     cout<<"Enter value of n : ";
//     cin>>n;
//     cout << "Nth Term is "<<ap(n)<<endl;
//     return 0;
// }

// Question 2. a&b count no of 1's(Set Bits) in a and b.
// #include<iostream>
// using namespace std;
// int setBitsA(int a){
//     int count = 0;
//     while(a!=0){
//         if(a&1){
//             count++;
//         }
//         a = a >> 1;
//     }
//     return count;
// }
// int setBitsB(int b){
//     int count = 0;
//     while(b!=0){
//         if(b&1){
//             count++;
//         }
//         b = b >> 1;
//     }
//     return count;
// }
// int main()
// {
//     int a, b;
//     cout << "Enter the value of a & b : ";
//     cin >> a >> b;
//     int ans1 = setBitsA(a);
//     cout << "Set Bits of A are " << ans1 << endl;
//     int ans2 = setBitsA(b);
//     cout << "Set Bits of B are " << ans2 << endl;
//     int ans = ans1 + ans2;
//     cout <<"Set Bits of A and B are "<< ans << endl;
//     return 0;
// }

// Question 3. Fibonacci series nth Term. 0,1,1,2,3,5,8,13.....
// #include<iostream>
// using namespace std;
// //Calculating fibonacci term of nth term
// int fibonacci(int nterm){
//     int fib,f1 = 0,f2 = 1;
//     // if term is 1 then value is 0
//     if(nterm == 1){
//         return f1;
//     }
//     // if term is 2 then value is 1
//     else if (nterm == 2){
//         return f2;
//     }
//     // calculating terms after 2nd term.
//     for(int i = 3; i <= nterm ; i++){  
//         fib = f1 + f2;
//         f1 = f2;
//         f2 = fib;
//     }
//     return fib;
// }
// int main()
// {
//     int n;
//     cout <<"Enter nth term : ";
//     cin >> n;
//     cout << "The " << n << "th term of the Fibonacci series is " << fibonacci(n) << "." << endl;
//     return 0;
// }