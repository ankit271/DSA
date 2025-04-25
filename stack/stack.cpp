#include <iostream>
#define MAX 5

using namespace std;

class Stack {
    
        int top;
        int arr[MAX];

    public:
        Stack()
        {
            top = -1;
        }

        void push(int value){
            top++;
            if(top > MAX -1){
                cout << "Stack is full" << endl;
                return;
            }             
            arr[top] = value;
        }

        bool isFull(){
            if (top > MAX - 1)
            {                
                return true;
            }
            return false;
        }

        int size(){
            return top +1;
        }

        void pop(){  
            if(top < 0)          {
                cout << "Stack is empty";
                return;
            }
            arr[top] = 0;
            top--;            
        }

        bool isEmpty(){
            if(top < 0){
                return true;
            }
            return false;
        }

        int peek(){
            return arr[top];
        }

        
        void display(){
            for(int i =0 ; i <= top; i ++){
                cout << "element is " << arr[i] << endl;
            }           
        }
};

int main(){

    Stack s;
    s.push(10);
    s.push(20);
    // cout << "Is stack full? " << s.isFull() << endl;
    // cout << "Size of stack is " << s.size() << endl;
    s.push(30);
    s.push(40);
    s.push(50);
    //s.display();

    while (!s.isEmpty())
    {
        cout << s.peek() << " ";
        s.pop();
    }
    // s.pop();
    // s.pop();
    // s.pop();
    // s.pop();
    // s.pop();
    
    //cout << "Is stack empty? " << s.isEmpty();

    //cout << "Top element is " << s.peek() << endl;

    return 0;
}