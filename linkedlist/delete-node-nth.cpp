#include <iostream>

using namespace std;

 
struct Node{
    int data;
    Node* next;
};

Node* head;

void Insert(int x, int pos)
{
    Node* newNode = new Node();
    newNode->data = x;
    newNode->next = NULL;

    if (pos == 1){
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* prevNode = head;

    for (int i = 1; i < pos-1; i++)
    {
        prevNode = prevNode->next;
    }

    newNode->next = prevNode->next;
    prevNode->next = newNode;

}

void Delete (int pos)
{
    Node* temp1 = head;
    if (pos == 1)
    {
        head = temp1->next;
        delete(temp1);
        return;
    }

    for (int i = 1; i < pos-1; i++)
    {
        temp1= temp1->next;
    }


    Node* temp2 = temp1->next;
    temp1->next = temp2->next;

    delete(temp2);

}

void Print()
{
    Node* temp = head;
    cout << "List is";
    while (temp != NULL)
    {
        cout << " " << temp->data;
        temp = temp->next;
    }
    cout << endl;
}
int main()
{   
   int x;
   head = NULL;
   Insert(2, 1);
   Insert(3, 2);
   Insert(4, 3);
   Insert(5, 1);
   Print();
   Delete (3);
   Delete (1);
   Print(); 
}