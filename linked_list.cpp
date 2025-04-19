#include <iostream>

using namespace std;

class Node {

    public:
        int data;
        Node* next;

        Node(int value){
            data = value;
            next = nullptr;
        }
};

class LinkedList{
    public:
        Node* head;
    
        LinkedList() : head(nullptr) {            
        }

};

void traverse(Node* head){
    Node* current = head;

    while (current != nullptr){
        cout << current->data << endl;
        current = current->next;
    }
}

void insertAtBeginning(Node* &head, int value){
    // cout << head->data << endl;
    // cout << head << endl;

    Node* newNode = new Node(value);
    // cout << newNode->data << endl;
    // cout << newNode;

    newNode->next = head;
    head = newNode;
}

int main(){

    Node* first = new Node(1);
    Node* second = new Node(2); 
    Node* third = new Node(3);
    first->next= second;
    second->next = third;
    third->next = nullptr;

    Node* head = first;
    // cout << first->data << endl;
    // cout << first << endl;
    insertAtBeginning(head, 4);
    traverse(head);
}