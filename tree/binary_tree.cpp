#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

class BinaryTree {
    Node* node;

    public:
        BinaryTree(){
            node = nullptr;
        }

        Node* insertNode(Node* newNode, int val){
            if(newNode == nullptr){
                return new Node(val);
            }

            if(val < newNode->data){
                newNode->left = insertNode(newNode->left, val);
            }
            else if (val > newNode->data)
            {
                newNode->right = insertNode(newNode->right, val);
            }
            return newNode;
        }

        void insert(int val){
            if(node == nullptr){
                node = new Node(val);
            }
            else{
                node = insertNode(node, val);
            }
        }

        void preOrder(Node* node){
            if (node == nullptr)
            {
                return;
            }
            cout << node->data << " ";
            preOrder(node->left);
            preOrder(node->right);                                    
        }

        void postOrder(Node *node)
        {
            if (node == nullptr)
            {
                return;
            }
            postOrder(node->left);
            cout << node->data << " ";
            postOrder(node->right);
        }

        void inOrder(Node *node)
        {
            if (node == nullptr)
            {
                return;
            }
            inOrder(node->right);
            inOrder(node->left);
            cout << node->data << " ";            
        }

        void displayTree(){
         // preOrder(node);
         // postOrder(node);
         inOrder(node);
        }
       
};

int main(){

    BinaryTree tree;   
    tree.insert(10);
    tree.insert(5);
    tree.insert(15);
    tree.insert(2);
    tree.insert(7);
    tree.insert(12);
    tree.insert(20);
    tree.displayTree();
 
    return 0;
}

