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
    void Print();
    void Count();
    void insert(int num);
};
LinkList::LinkList()
{
    START = NULL;
}
void LinkList::Print()
{
    if (START == NULL)
    {
        cout << "Linked list is empty" << endl;
        return;
    }
    cout << endl
         << "Linked list contains";
    Node *p = START;
    while (p != NULL)
    {
        cout << " " << p->data;
        ;
        p = p->link;
    }
}
void LinkList::insert(int num)
{
    Node *newNode;
    newNode = new Node;
    newNode->data = num;
    newNode->link = START;
    START = newNode;
    cout << num << " is inserted at the beginning" << endl;
}
void LinkList::Count()
{
    Node *p;
    int c = 0;
    //Traverse the entire Linked List
    for (p = START; p != NULL; p = p->link)
        c++;
    cout << endl
         << "No.of elements in the linked list = " << c << endl;
}
int main()
{
    LinkList *obj = new LinkList;
    int item;
    char ch;
    cout << "Do you want to insert a node at the beginning(Y / N) : ";
    cin >> ch;
    while (toupper(ch) == 'Y')
    {
        cout << "Enter the item to be inserted at the beginning : ";
        cin >> item;
        obj->insert(item);
        cout << "Do you want to insert a node at the beginning(Y / N) : ";
        cin >> ch;
    }
    obj->Print();
    obj->Count();
    cout << "***** END OF CODE *****\n";
}