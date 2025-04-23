#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

void traverseNode(Node* head){
    
    Node * current = head;
    while(current != nullptr){
        cout << "Data: " << current->data <<  " Current Address:  " << current << " Next Address " << current->next  << endl; 
        current = current->next;
    }
}

void insertNode(Node* &node ,int value){

    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (node == nullptr){
        node = newNode;
    }
    else{

        Node *current = node;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = newNode;
    }
    
    cout << "Inserted Node with value: " << newNode->data << endl;
}

int main(){
   
    Node* head = nullptr;
    insertNode(head, 40);
    insertNode(head, 400);
    insertNode(head, 4000);
    insertNode(head, 50);
    insertNode(head, 500);
    insertNode(head, 5000);

    traverseNode(head);

    return 0;
}