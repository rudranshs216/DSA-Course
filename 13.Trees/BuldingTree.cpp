#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
Node *buildTree()
{
    int data;
    cout << "Enter the Data: " << endl;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    Node *root = new Node(data);
    cout << "Enter data for left part: " << data << " node " << endl;
    root->left = buildTree();
    cout << "Enter data for right part: " << data << " node " << endl;
    root->right = buildTree();
    return root;
};
void LinearTraversal(Node root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node curr = q.front();
        cout<<curr.data;
        q.pop();
        if(curr.left != NULL){
            q.push(curr.left);
        }
        if(curr.right != NULL){
            q.push(curr.right);
        }
    }

}
int main()
{
    Node* root = NULL;
    root = buildTree();
}