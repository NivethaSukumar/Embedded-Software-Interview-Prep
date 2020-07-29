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

void Reverse(Node *p)
{
    if (p->next == NULL){
        head = p;
        return;
    }
    Reverse(p->next);

    struct Node* q = p->next;

    q->next = p;
    p->next = NULL;
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
   Node* p = new Node();
   Insert(2, 1);
   Insert(3, 2);
   Insert(4, 3);
   Insert(5, 1);
   Print();
   Reverse(&p);
   Print(); 
}