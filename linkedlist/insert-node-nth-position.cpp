#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head;

void Insert (int x, int position)
{
    Node* newNode = new Node();
    newNode->data = x;
    newNode->next = NULL;

    if (position == 1)
    {
        newNode->next = head;
        head = newNode;
        return;
    }
    Node* previousNode = head;

    for(int i =1; i < position-1; i++)
    {
        previousNode = previousNode->next;
    }
    newNode->next = previousNode->next;
    previousNode->next = newNode;
}

void Print()
{
    Node *temp = head;
    cout << "List is: ";
    while (temp != NULL)
    {
        cout << " " << temp->data;
        temp = temp->next;
    }
    cout << endl;
}
int main(){

    head = NULL;
    int position, i, x;

    Insert (2, 1);
    Insert (3, 2);
    Insert (4, 1);
    Insert (5, 2);
    Print();

    return 0;
}