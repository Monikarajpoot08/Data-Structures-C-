// Program to implement a linked list
#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node * next ;
};

Node *head = NULL;
Node *temp = NULL;

// insert data into node
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
    cout<<" do you want to continue (0/1)"<< endl;
    cin>> choice;

  }
 }
}

// display linked list
void display()
{   if (head== NULL){
    cout<< " no nodes in the list";
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

}

