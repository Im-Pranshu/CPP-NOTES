/* Function
#include<iostream>
using namespace std;

int main()
{
    // pow(a,b)
    // calculating power 2nd time in same code
    int a , b;
    cin >> a >> b;
    
    int ans = 1;
    
    for(int i = 1; i <= b ; i++){
        ans = ans * a;
    }

    cout<<"pow(a,b) : "<<ans<<endl;

    // calculating power 2nd time in same code
    int c , d;
    cin >> c >> d;
    
    int ans = 1;
    
    for(int i = 1; i <= d ; i++){
        ans = ans * c;
    }

    cout<<"pow(c,d) : "<<ans<<endl;

    // this makes code very bulku and not readable so that's why we use functions.
    return 0;
}*/

#include<iostream>
using namespace std;

// int power(int a, int b){
//     int ans = 1;
//     for (int i = 1; i <= b ; i++){
//         ans = ans * a;
//         return b;
//     }
// }

// Minimizing above code and driver's code
int power(){
    int a , b;
    cin >> a >> b;
    int ans = 1;
    for (int i = 1; i<= b; i++){
        ans = ans * a;
    }
    return ans;
}

int main()
{
    cout << "pow(a,b) : " << power() << endl;
    cout << "pow(a,b) : " << power() << endl;
    
    return 0;
}