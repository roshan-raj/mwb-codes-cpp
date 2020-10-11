#include <iostream>
using namespace std;

class LinkList
{
private:
    struct Node
    {
        int data;
        Node *link;
    } * START;

public:
    LinkList();
    void Print();         //Prints the contents of linked list
    void Append(int num); //Adds a new node at the end of the linked list
    void Count();         //Counts number of nodes in the linked list
};

LinkList::LinkList() //Constructor
{
    START = NULL;
}

// Prints the contents of linked list
void LinkList::Print()
{
    if (START == NULL)
    {
        cout << "Linked list is empty \n";
        return;
    }
    //Traverse
    cout << "Linked list contains ";
    Node *p = START;
    while (p != NULL)
    {
        cout << " " << p->data; 
        ;
        p = p->link;
    }
}
// to access normal variables in structure use . for pointers use -> 
// Adds a new node at the end of the linked list
void LinkList::Append(int num)
{
    Node *newNode;
    newNode = new Node;
    newNode->data = num;
    newNode->link = NULL;
    if (START == NULL)
    {
        //create first node
        START = newNode;
        cout << num << "is inserted as the first node \n";
    }
    else
    {
        //Traverse
        Node *p = START;
        while (p->link != NULL)
            p = p->link;
        //add newnode to the end of the linked list
        p->link = newNode;
        cout << num << " is inserted \n";
    }
}
// Counts number of nodes present in the linked list
void LinkList::Count()
{
    Node *p;
    int c = 0;
    //Traverse the entire Linked List
    for (p = START; p != NULL; p = p->link)
        c++;
    cout << "\nNo.of elements in the linked list = " << c << " \n";
}
int main()
{
    LinkList *obj = new LinkList();
    obj->Print();
    obj->Append(100);
    obj->Print();
    obj->Count();
    obj->Append(200);
    obj->Print();
    obj->Count();
    obj->Append(300);
    obj->Print();
    obj->Count();
}
