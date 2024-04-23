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

        ~Node(){
            int deletedValue = this -> data;
            if(this -> next != NULL){
                delete next;
                this -> next = NULL;
            }
            cout << "Memory of freed for Deleted Node : " << deletedValue << endl;
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

void deleteNode(Node * &head , int position){
    // if head is deleting 1st node
    if(position==1){
        // store currentNode which is to be deleted.
        Node* currentNode = head;
        // head ko age badha do
        head = head->next;
        // currentNode ka link tod do
        currentNode-> next = NULL;
        // memory free
        delete currentNode;
    }
    else // Delete value at any position or end of the list
    {
        Node * prevNode = NULL;
        Node * currentNode = head;
        // shift current node and previous node till the position where node is to be deleted.
        int cnt = 1;
        while(cnt < position){
            prevNode = currentNode;
            currentNode = currentNode -> next;
            cout << "Count : " << cnt << endl;
            cnt++;
        }

        cout << "Final Count : " <<  cnt << endl;

        // prevNode ko deleted node ke bad wale me point kara do 
        prevNode -> next = currentNode -> next;
        // delete node ka link break kardo
        currentNode -> next = NULL;
        // memory free kardo.
        delete currentNode;
    }
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
    // intially LL has 0 nodes so head is NULL.
    Node * head = NULL;

// ********Insert AT Position*****************
    insertAtHead(head,10);
    cout << "Head Insertion : ";
    print(head);

    insertAtHead(head,14);
    cout << "Head Insertion : ";
    print(head);

    insertAtHead(head, 19);
    cout << "Head Insertion : ";
    print(head);

    insertAtHead(head, 24);
    cout << "Head Insertion : ";
    print(head);

    insertAtHead(head, 12);
    cout << "Head Insertion : ";
    print(head);

    cout << "Head : " << head->data << endl;

    // Delete Node
    deleteNode(head,1);
    print(head);
    
    return 0;
}