#include <iostream>

using namespace std;

class Queue{
    private:
        int *arr;
        int front;
        int rear;
        int capacity;
    public:
        Queue(int cap){
            arr = new int[cap];
            front = 0;
            rear = -1;
            capacity = cap;
        }

        void enqueue(int value){
            if(rear == capacity -1){
                cout << "Queue is full" << endl;
                return;
            }
            arr[++rear] = value;
        }

        int size(){
            return rear+1;
        }
    
};


int main(){

    int n;
    cout << "Enter the size of the queue: ";
    cin >> n;

    Queue q(n);

    q.enqueue(10);
    q.enqueue(100);
    q.enqueue(1000);
    q.enqueue(20);

    cout << "Size of queue: " << q.size() << endl;

    return 0;
}