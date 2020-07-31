// Queue using linkedlist

/*
Enqueue - Adding a node to the tail
Dequeue - Deleting a node from the head
Front - Getting the head node
IsEmpty - Front/Rear == NULL
*/
#include <iostream>
#include <stdio.h>

using namespace std;
struct Node {

    int data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

void Enqueue(int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    if ((front == NULL) && (rear == NULL)){
        front = newNode;
        rear = newNode;
        return;
    }

    rear->next = newNode;
    rear = newNode;

}

void Dequeue()
{
    if ((front == NULL) && (rear == NULL)) {
        cout << "Queue is empty";
        return;
    } else if (front == rear) {
        front == NULL;
        rear = NULL;
    } else {
        Node* temp = front;
        front == temp->next;
        free(temp);
    }
}

void Print()
{
    Node* temp = front;

    while(temp != NULL){
        cout << temp->data;
        temp = temp->next;
    }
    cout << endl;
}
int main() {
    Enqueue(2); Print();
    Enqueue(3); Print();
    Enqueue(4); Print();
    Enqueue(5); Print();
    Dequeue(); Print();
    return 0;
}