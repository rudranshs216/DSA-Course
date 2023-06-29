#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        next = NULL;
    }

    Node(int data)
    {
        this->data = data;
    }
    ~Node()
    {
    }
};

void InsertAtHead(Node *&head, Node *&tail, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    temp->next = head;
    head = temp;
}
void InsertAtTail(Node *&head, Node *&tail, int data)
{
    Node *temp = new Node(data);
    if (tail == NULL)
    {
        tail = temp;
        head = temp;
        return;
    }
    tail->next = temp;
    tail = temp;
}
void insertAtPosition(Node *&head,Node* & tail, int value, int pos)
{
    Node *temp = new Node(value);
    if (head == NULL)
    {
        head = temp;
        return;
    }
    Node* temp2 = head;
    if(pos == 0){
        // InsertAtHead(head,tail,value);
        temp->next = head;
        head = temp;
        return ;
    }
    int start = 1;
    while(start < pos){
        temp2 = temp2->next;
        start++;
    }
    temp->next = temp2->next;
    temp2->next = temp;
}
void reverse(Node* &head){
    Node* prev = head, *next = NULL;
    Node* current = head->next;
    prev->next = NULL;
    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;


}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    InsertAtHead(head, tail, 20);
    InsertAtHead(head, tail, 30);
    InsertAtHead(head, tail, 40);

    // InsertAtTail(head, tail, 20);
    // InsertAtTail(head, tail, 30);
    // InsertAtTail(head, tail, 40);

    // cout<<head->data<<" "<<tail->data<<endl;

    insertAtPosition(head,tail, 90, 3);
    reverse(head);

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}