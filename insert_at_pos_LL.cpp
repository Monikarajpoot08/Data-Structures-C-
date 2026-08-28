// Program to insert data in linked list at any position
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
};

Node* head = NULL;
Node* temp = NULL;

// Create node
Node* createNode(int data)
{
    Node* newnode = new Node();

    newnode->data = data;
    newnode->next = NULL;

    return newnode;
}

// Insert at beginning
void insertatbegin(int data)
{
    Node* newnode = createNode(data);

    newnode->next = head;
    head = newnode;
}

// Insert at end
void insertatend(int data)
{
    Node* newnode = createNode(data);

    if(head == NULL)
    {
        head = newnode;
        return;
    }

    temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newnode;
}

// Insert at any position
void insertatpos(int pos, int data)
{
    Node* newnode = createNode(data);

    // Insert at beginning
    if(pos == 1)
    {
        newnode->next = head;
        head = newnode;
        return;
    }

    temp = head;

    int i = 1;

    while(i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    
    // Invalid position
    if(temp == NULL)
    {
        cout << "Invalid position" << endl;
        delete newnode;
        return;
    }


    newnode->next = temp->next;
    temp->next = newnode;
}


// Display linked list
void display()
{
    if(head == NULL)
    {
        cout << "No nodes in the list" << endl;
        return;
    }

    temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    insertatbegin(22);
    insertatend(23);
    insertatend(45);
    insertatend(56);
    insertatend(90);
    insertatend(78);

    cout << "Before insertion: ";
    display();

    insertatpos(6, 96);


    cout << "After insertion: ";
    display();

    return 0;
}