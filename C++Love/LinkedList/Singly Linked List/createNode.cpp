#include<iostream>
using namespace std;

// declaring class to of NODE.
class Node{
    public:
        int data;
        Node *next;

        // constructor
        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }

};

int main()
{
    // creating new node
    Node *node1 = new Node(5);

    cout << node1 -> data << endl;
    cout << node1 -> next;
    return 0;
}