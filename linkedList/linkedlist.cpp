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

void insertNodeAt(Node *&node, int value, int position)
{
    int pos = 0;
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    Node *current = node;
    
    while (current->next != nullptr)
    {
        pos++;
        if (pos == position - 1)
        {
            newNode->next = current->next;
            current->next = newNode;
            cout << "Inserted Node with value: " << newNode->data << endl;                
        }   
        current = current->next;                     
    }            
}

void deleteNodeByValue(Node *&node, int value){

    Node* current = node;
    Node* prev = nullptr;

    if(node == nullptr){
        cout << "List is empty" << endl;
        return;
    }

    // If head node itself holds the value to be deleted
    if (current != nullptr && current->data == value)
    {
        node = current->next; // Changed head
        delete current;       // Delete old head
        return;
    }

    while (current->next != nullptr && current->data != value)
    {
        prev = current;
        current = current->next;
    }
    prev->next = current->next;
    delete current; // Free memory;
}

int main(){
   
    Node* head = nullptr;    
    insertNode(head, 4000);
    insertNode(head, 400);
    insertNode(head, 50);
    insertNode(head, 500);
    insertNode(head, 5000);
    insertNodeAt(head,40,3);
    deleteNodeByValue(head,500);    
    traverseNode(head);

    return 0;
}