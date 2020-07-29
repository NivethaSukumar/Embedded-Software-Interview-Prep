#include <stdio.h>
#include <iostream>

using namespace std;
#define MAX_SIZE 20
int top = -1;
int arr[MAX_SIZE];


int getTop(){
    return arr[top];
}
bool isEmpty(){
    if(top == -1){
        return true;
    } else {
        return false;
    }
}
void pop(){
    if (isEmpty()){
        printf("Stack is empty\n");
    } else {
        top--;
    }
}
void push(int x){
    if (top == MAX_SIZE-1){
        printf("No space in the stack to push elements");
    } else {
        arr[++top] = x;
    }
}

void print(){

    for (int i = 0; i <=top; i++){
        cout << arr[i] << " ";
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