#include <iostream>

using namespace std;

#define MAX_SIZE 5
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
            return (rear+1)%MAX_SIZE == front ? true : false;
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
                rear = (rear+1) % MAX_SIZE;
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
                front = (front +1)% MAX_SIZE;
            }
        }

        void Print() {
            // Finding number of elements in queue  
            int count = (rear+MAX_SIZE-front)%MAX_SIZE + 1;
            cout<<"Queue       : ";
            for(int i = 0; i <count; i++)
            {
                int index = (front+i) % MAX_SIZE; // Index of element while travesing circularly from front
                cout<<A[index]<<" ";
            }
            cout<<"\n\n";
        }

};

int main(){

    Queue Q;
    Q.Enqueue(1); Q.Print();
    Q.Enqueue(2); Q.Print();
    Q.Enqueue(3); Q.Print();
    Q.Enqueue(4); Q.Print();
    Q.Enqueue(5); Q.Print();
    Q.Dequeue(); Q.Print();
    Q.Dequeue(); Q.Print();
    Q.Enqueue(10); Q.Print();

    return 0;
}

