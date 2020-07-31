#include <iostream>

using namespace std;

#define MAX_SIZE 100
class Queue{

    private:
        int A[MAX_SIZE];
        int front, rear;
    
    public:
        Queue()
        {
            front = -1;
            rear = -1;
        }

        bool isFull(){
            if (rear == sizeof(A)-1){
                return true;
            } else {
                return false;
            }
        }

        bool isEmpty(){

           return (front == -1 && rear == -1); 
        }

        void Enqueue(int x){
            // To push values in a queue

            if(isFull()){
                cout << "Queue is Full " << endl;
                return;
            }
             else if (isEmpty()){
                front = 0;
                rear = 0;
              
            } else {
                rear = rear+1;
            }

            A[rear] = x;
        }

        void Dequeue() {
            if (isEmpty()){
                cout << "Queue is empty" << endl;
                return;
            } else if(front == rear){
                front = rear = -1;
            } else {
                front = front +1;
            }
        }

        void Print() {
            for (int i = front; i <=rear; i++){
                cout << A[i] << " ";
            }
            cout << endl;
        }

};

int main(){

    Queue Q;
    Q.Enqueue(1); Q.Print();
    Q.Enqueue(2); Q.Print();
    Q.Enqueue(3); Q.Print();
    Q.Enqueue(4); Q.Print();
    Q.Dequeue(); Q.Print();

    return 0;
}

