#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d ) {
        this-> data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    // destructor
    ~Node() {
        int val = this -> data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data "<< val << endl;
    }
};

//traversing a linked list
void print(Node* head) {
    Node* temp  = head ;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp  = temp -> next;
    }
    cout << endl;
}

//gives length of Linked List
int getLength(Node* head) {
    int len = 0;
    Node* temp  = head ;

    while(temp != NULL) {
        len++;
        temp  = temp -> next;
    }

    return len;
}

void insertAtHead(Node* &tail, Node* &head, int d) {

    Node* temp = new Node(d);
    //empty list
    if(head == NULL) {
        head = temp;
        tail = temp;
    }
    else{
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }

}


void insertAtTail(Node* &tail,Node* &head, int d) {
    Node* temp = new Node(d);
    if(tail == NULL) {
        tail = temp;
        head = temp;
    }
    else{
        tail -> next  = temp;
        temp -> prev = tail;
        tail = temp;
    }

}

void insertAtPosition(Node* & tail, Node* &head, int position, int d) {
    
    //insert at Start
    if(position == 1) {
        insertAtHead(tail,head, d);
        return;
    }


    // temp pointer to point to the position-1 node
    Node* temp  = head;
    int cnt = 1;

    // move temp to position-1.
    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail,head,d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert ->next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

void deleteNode(int position, Node* & head) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        head = temp ->next;

        // if list has only one node then it won't execute
        if(head != NULL) {
            head -> prev = NULL;
        }

        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* current = head;
        Node* previous = NULL;

        int cnt = 1;
        while(cnt < position) {
            previous = current;
            current = current -> next;
            cnt++;
        }

        current -> prev = NULL;
        previous -> next = current -> next;
        current -> next = NULL;

        delete current;

    }
}

Node* reverseDoublyLinkedList(Node* head){
    if(head == nullptr || head->next == nullptr)
        return head;
    else{
        Node* previousNode = NULL;
        Node* currentNode = head;
        Node* forwardNode = currentNode->next;

        while(currentNode != nullptr){
            forwardNode = currentNode->next;
            currentNode->next = previousNode;
            currentNode->prev = forwardNode;
            previousNode = currentNode;
            currentNode = forwardNode;
        }

        return previousNode;
    }
}


int main() {


    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    //cout << getLength(head) << endl;

    insertAtHead(tail,head, 11);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtHead(tail,head, 13);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtHead(tail,head, 8);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtTail(tail,head, 25);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtPosition(tail, head, 2, 100);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtPosition(tail, head, 1, 101);
    print(head);

    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtPosition(tail, head, 7, 102);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    // deleteNode(7, head);
    // print(head);
    // cout << "head  " << head -> data << endl;
    // cout << "tail  " << tail -> data << endl;

    head = reverseDoublyLinkedList(head);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    return 0;
}