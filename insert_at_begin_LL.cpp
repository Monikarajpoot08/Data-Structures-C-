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

// to insert a node at the beginning
void insertatbegin()
{ 
    Node * newnode= new Node();
    cout<< "enter the data you want to insert";
    cin>> newnode->data;
    newnode->next=head;
    head=newnode;
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
  insertatbegin();
  cout << endl;
  display();

}