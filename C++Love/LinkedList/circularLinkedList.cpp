#include<iostream>
#include<map>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //constrcutor
    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    ~Node() {
        int value = this->data;
        if(this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "Memory is free for deleted node with data " << value << endl;
    }

};

void insertNode(Node* &head, int element, int d) {
    
    //empty list
    if(head == NULL) {
        Node* newNode = new Node(d);
        head = newNode;
        newNode -> next = newNode;
    }
    else{
        //non-empty list
        //assuming that the element is present in the list

        Node* curr = head;

        while(curr->data != element) {
            curr = curr -> next;
        }
        
        //element found -> curr is representing element wala node
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;

    }

}    

void print(Node* head) {

    //empty list
    if(head == NULL) {
        cout << "List is Empty "<< endl;
        return ;
    }

    Node* temp = head;

    do {
        cout << head -> data << " ";
        head = head -> next;
    } while(head != temp);

    cout << endl;
} 

void deleteNode(Node* &head, int value) {

    //empty list
    if(head == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else{
        //non-empty
 
        //assuming that "value" is present in the Linked List
        Node* prev = head;
        Node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        //1 Node Linked List
        if(curr == prev) {
            head = NULL;
        }
        //>=2 Node linked list
        else if(head == curr ) {
            // kisi ko bhi point kara do matter nahi karta kuki circular linked list hai.
            head = prev->next;
        }

        curr -> next = NULL;
        delete curr;

    }

}

bool isCircularList(Node* head) {
    //empty list
    if(head == NULL) {
        return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head ) {
        temp = temp -> next;
    }

    if(temp == head ) {
        return true;
    }

    return false;

}

bool detectLoop(Node* head) {

    if(head == NULL)
        return false;

    map<Node*, bool> visited;

    Node* temp = head;

    while(temp !=NULL) {
        //cycle is present
        if(visited[temp] == true) {
            return true;
        }
        visited[temp] = true;
        temp = temp -> next;
    }
    return false;

}

int getListLenght(Node* head){
    int cnt = 0;// store the no of nodes in LL
    Node* temp = head->next;
    // counting no of nodes assuming index as zero
    while(temp != head){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

Node* splitList(Node* head){

    int len = getListLenght(head);// length of list

    int nodes = len/2+1; // finding half of the nodes.
    // cout << "Half of Nodes : " << nodes << endl;

    // reaching to the point from where to break.
    Node* head2 = head;
    for(int i=1; i<nodes; i++){
        head2 = head2->next;
    }

    // store the new head
    Node* temp = head2->next;

    // make the 1st Splitted LL circular
    head2->next = head;

    // appoint head2 as head of 2nd List
    head2 = temp;
    // reaching the final node of 2nd List
    while(temp->next != head){
        temp = temp->next;
    }
    // connect last node of 2nd list to head2 to make it circular.
    temp->next = head2;

    return head2;
}

int main() {

    Node* head = NULL;

    insertNode(head, 0, 3);
    insertNode(head, 3, 5);
    insertNode(head, 5, 7);
    insertNode(head, 7, 9);
    insertNode(head, 5, 6);
    insertNode(head, 6, 12);
    insertNode(head, 5, 23);
    print(head);

    // deleteNode(head, 3);
    // print(head);

    // cout << isCircularList(head) << endl;

    // cout << detectLoop(head) << endl;

    // Splitting the CLL.
    Node* head2 = splitList(head);

    cout << "First Splitted Linked List :- \t";
    print(head);

    cout << "Second Splitted Linked List :- \t";
    print(head2);

/*  
    if(isCircularList(head)) {
        cout << " Linked List is Circular in nature" << endl;
    }
    else{
        cout << "Linked List is not Circular " << endl;
    }
*/

    return 0;
}
