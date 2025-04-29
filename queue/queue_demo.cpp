#include <iostream>
#define MAX 5

using namespace std;

class Queue{
    private:
        int front, rear;
        int arr[MAX];
    public:
        Queue(){
            rear = -1;
            front = 0;
        }

        void enqueue(int data){
            if(rear == MAX -1){
                cout << "Queue is full" << endl;
                return;
            }
            arr[++rear] = data;
        }

        void dequeue(){
            if(rear == -1){
                cout << "Queue is empty" << endl;
                return;
            }
            for(int i =0 ; i < rear; i++){
                arr[i] = arr[i +1];
            }
            rear--;
        }

        int size(){
            return rear +1;
        }

        int frontElement(){
            return arr[front];
        }

        
        int backElement(){
            return arr[rear];
        }


        bool isEmpty(){
            if(rear == -1){
                return true;
            }
            else{
                return false;
            }
        }

        void display(){

            for(int i = 0; i <= rear; i++){
                cout << arr[i] << " ";
            }
        }

};



int main(){

    Queue q;
    cout << q.isEmpty() << endl;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    cout << q.size() << endl;
    cout << q.isEmpty() << endl;
    cout << "Front element " << q.frontElement() << endl;
    cout << "Rear element " << q.backElement() << endl;
    q.display();
    return 0;
}