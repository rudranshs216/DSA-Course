#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev; 
    Node *next;
    Node()
    {
        next = NULL;
        prev = NULL;
    }

    Node(int data)
    {
        this->data = data;
    }
};
void insertAtHead(Node* &head, Node* &tail, int data){
    Node* temp = new Node(data);
    if(head == NULL){
        head = temp;
        tail = temp;
        return ;
    }
    head->prev = temp;
    temp ->next = head;
    head = temp;
}
void insertAtTail(Node* &head, Node* &tail, int data){
    Node* temp = new Node(data);
    if(tail == NULL){
        head = temp;
        tail = temp;
        return ;
    }
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
int findLength(Node* &head){
    Node* temp = head;
    int length = 0;
    while(temp != NULL){
        length++;
        temp = temp->next;
    }
    return length;
}
void insertAtPos(Node* &head, Node* &tail, int data, int pos){
    Node* temp = new Node(data);
    if(tail == NULL && head == NULL){
        head = temp;
        tail = temp;
        return ;
    }
    Node* temp2 = head;
    int start = 1;
    if(pos <= 0){
        insertAtHead(head,tail,data);
        return ;
    }
    if(pos >= findLength(head)){
        insertAtTail(head,tail,data);
        return ;
    }
    while(start<pos){
        temp2=temp2->next;
        start++;
    }
    temp->prev = temp2;
    temp->next = temp2->next;
    temp2->next->prev = temp;
    temp2->next = temp;
    };

int main(){
    // Node* head = NULL;
    // Node* tail = NULL;
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* tail = new Node(30);

    head->next = second;
    
    second->prev = head;
    second->next = tail;

    tail->prev = second;

    insertAtHead(head,tail,90);
    insertAtTail(head,tail,90);
    insertAtPos(head,tail,20,7);

    Node* temp = head;
    int length = 0;
    while(temp != NULL){
        cout<<temp->data<<" ";
        length++;
        temp = temp->next;
    }
    cout<<endl;
    cout<<head->data<<" "<<tail->data<<endl;
    cout<<length<<endl;
}
