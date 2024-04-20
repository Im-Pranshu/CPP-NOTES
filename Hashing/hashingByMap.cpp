#include<iostream>
#include<map>
using namespace std;

int main()
{   
    // Input the size of the array.
    int n;
    cin >> n;
    // Input the elements of the array.
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    //precompute:
    // Storing the occurrences in map for all the elements of the array.
    map<int,int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    // Printing All Stored occurences in the map of all the values of the array.
    for(auto it:mp)
        cout << it.first << " -> " << it.second << endl;

    // Taking input of the query and printing the values accordingly.
    int q;
    cin >> q;
    cout << endl << "Answer according to Inputted queries :";
    while(q--){
        int num;
        cin >> num;
        // Fetching the occurences of the values and printing.
        cout << endl << "\t" << num << " -> " <<mp[num];
    }
    


    
    return 0;
}