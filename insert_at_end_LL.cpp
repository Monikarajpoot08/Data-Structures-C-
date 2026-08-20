// Program to insert at the beginning of linked list
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

Node *head = NULL;
Node *temp = NULL;

// create node
void createNode()
{  
  {
    int choice =1;
    while(choice)
   {
    int data;
    cout<<"enter the data"<<endl;
    cin>> data;
    Node *newnode = new Node();
    newnode->data=data;
    newnode->next= NULL;
    if (head== NULL)
    {
        temp=head=newnode;
    }
    else{
        temp->next= newnode;
        temp = newnode;
    }
    cout<<"do you want to continue (0/1)"<< endl;
    cin>> choice;

  }
 }
}

// to insert a node at the end
void insertatend()
{   temp=head;
    Node * newnode= new Node();
    cout<< "enter the data you want to insert at end";
    cin>> newnode->data;
    newnode->next= NULL;
    while(temp->next !=NULL){
        temp= temp->next;
    }
    temp->next= newnode;
}

// display linked list
void display()
{   if (head== NULL){
    cout<< "no nodes in the list";
    return;
}
    temp=head;
    while(temp!=NULL)
    {
        cout<< temp-> data<< " ";
        temp = temp->next;
    }

}
 
int main(){
  createNode();
  display();
  cout << endl;
  insertatend();
  cout << endl;
  display();
}