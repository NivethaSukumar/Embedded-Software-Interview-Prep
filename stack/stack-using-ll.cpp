#include <stdio.h>
#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* top = NULL;

void push(int x){
    Node* newNode = new Node();
    newNode->data = x;
    newNode->next = top;
    top = newNode;
}

void pop(){
 if (top == NULL){
    cout << "No more elements in the stack to pop";
     return;
 }
    Node* temp = top;
    top = temp->next;
    free(temp);
}

void print(){
    Node* temp = top;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    push(1);  print();
    push(2);  print();
    push(3);  print();
    push(5);  print();
    pop();  print();
    pop();  print();
    pop(); print();
    pop(); print();
    pop();
    return 0;
}