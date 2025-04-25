#include <iostream>
#define MAX 5

using namespace std;

class Queue{
    int arr[MAX];
    int front, rear;

    public:
        Queue(){
            front = 0;
            rear = -1;
        }

        void enqueue(int data){
            if(rear == MAX-1){
                cout << "Queue is full" << endl;
                return;
            }
            arr[++rear] = data;
        }

        void dequeue(){
            if(rear < front){
                cout << "Queue is empty" << endl;
                return;
            }
            for(int i = 0; i < rear; i++){
                arr[i] = arr[i+1];
            }
            rear--;
        }

        int size(){
            return rear+1;
        }

        bool isEmpty(){
            if(rear < MAX -1){
                return false;
            }
            return true;
        }

        bool isFull(){
            if(rear == MAX -1){
                return true;
            }
            return false;
        }

        int frontElement(){
            return arr[front];
        }

        int backElement(){
            return arr[rear];
        }
};



int main(){

    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    
    cout << q.backElement() << endl;
    cout << q.size() << endl;
    cout << q.frontElement() << endl;
    q.dequeue();
    q.dequeue();
    q.dequeue();

    return 0;
}