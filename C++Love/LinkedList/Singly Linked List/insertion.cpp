#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }
};

void insertAtHead(Node* &head , int data)// here &head is taken because we want to edit the original linkedList don't want to make a copy of the old linked list.
{
    // new node create
    Node * temp = new Node(data);
    // store address of head node in temp node address part.
    temp -> next = head;
    // point head to new node.
    head = temp;
}

void insertAtTail(Node* &head, Node* &tail , int data)// here &head is taken because we want to edit the original linkedList don't want to make a copy of the old linked list.
{
    // new node create
    Node * temp = new Node(data);

    // if linked list is empty
    if(tail == nullptr){
        tail = temp;
        head = temp;
        return;
    }

    // store address of head node in temp node address part.
    tail -> next = temp;
    // point head to new node.
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail , int position , int data){
    // inserting at 1st node 
    if(position == 1){
        insertAtHead(head,data);
        return;
    }

    // node counter to reach till position-1 node
    Node* temp = head;
    // we're assuming that it has atleast one node in the linked list that's why count is 1.
    int cnt = 1; 

    // traversing temp till the position to insert element.
    while(cnt != position-1){
        // cout << endl <<"Count : " << cnt << endl;
        // cout << "temp =  " << temp->data << endl;
        temp = temp->next;
        cnt++;
    }

    // cout << endl << "Final Count : " << cnt << endl;
    // cout << "Final temp =  " << temp->data << endl;

    // inserting at the last position
    if(temp->next == NULL){
        insertAtTail(head,tail,data);
        return;
    }

    // creating new node for insertion
    Node* nodeToInsert = new Node(data);
    // first store address of node at position so that linked list don't get lost.
    nodeToInsert -> next = temp -> next;
    // then connect it with the left part of the linked list
    temp -> next = nodeToInsert;
}

// traversal of linked list.
void print(Node* &head ){
    Node* temp = head;
    while(temp!=NULL)
    {
        // print karo
        cout << temp -> data << " ";
        // aage badho next node me.
        temp = temp->next;
    }cout << endl;
}

int main()
{
    // create new node manually
    // Node *node1 = new Node(10);
    // head pointed to node1.
    // Node * head = node1;

    // intially LL has 0 nodes so head is NULL.
    Node * head = NULL;

// ********Insert AT Head*****************
    insertAtHead(head,10);
    cout << "Head Insertion : ";
    print(head);

    insertAtHead(head,14);
    cout << "Head Insertion : ";
    print(head);

    insertAtHead(head, 19);
    cout << "Head Insertion : ";
    print(head);

// ******finding tail******
    Node* tail = NULL;
    Node* temp = head;
    while(temp != NULL){
        // current head is tail
        tail = temp;
        // goto next node and then 
        // check loop condition if it's null or not.
        temp = temp -> next;
    }

    cout << endl << "Present Head : " << head-> data << endl;
    
// ********Insert AT Tail**********
    insertAtTail(head,tail,8);
    cout << endl << "Tail Insertion : ";
    print(head);

    insertAtTail(head,tail,13);
    cout << "Tail Insertion : ";
    print(head);

    insertAtTail(head,tail,25);
    cout << "Tail Insertion : ";
    print(head);

    cout << endl << "Present Tail : " << tail-> data << endl;

// ********Insert AT Position*****************
    insertAtPosition(head, tail, 1 , 11);
    cout << endl << "Insertion at Position 1 : ";
    print(head);

    insertAtPosition(head, tail, 4 , 5);
    cout << "Insertion at Position 4 : ";
    print(head);

    insertAtPosition(head, tail, 7 , 21);
    cout << "Insertion at Position 7 : ";
    print(head);

    cout << endl << "Present Head : " << head-> data << endl;

    cout << endl << "Present Tail : " << tail-> data << endl;

    return 0;
}