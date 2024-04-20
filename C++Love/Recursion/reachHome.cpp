#include<iostream>
using namespace std;

void reachHome(int source , int destination){
    cout << "Source : " << source << "\t| Destination : " << destination << endl;;

    // Base Case
    if( source == destination) {
        cout << endl << "Reached Home !!" << endl << endl;
        return;
    }

    // Processing
    source++; // ek step age badho

    // Recursive Call
    reachHome(source,destination);

    // Processing 
    cout << "Return call of " << source << endl;
}

int main()
{
    int src,dest;
    cin >> src >> dest;

    reachHome(src,dest);
    cout << "Return call of " << src << endl;// because 1st call is made inside main function.

    return 0;
}