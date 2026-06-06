#include<iostream>
using namespace std ;
class node
{
    public:// variable declaration
    int data ;
    node *next;

    node(int value)//CONSTRUCTOR ( memory initialization
    {
        data =value;
        next =NULL;
    }

    };
    void insertAtBeginning(node*& head,int value)
    {
        node *newnode = new node(value);
        newnode->next=head;
        head =newnode;
    }
    void insertAtEnd(node*& head,int value)
    {
        node *newnode = new node(value);
        if(head==NULL){
            head= newnode;
            return ;
        }
        node*temp=head;
        while(temp->next !=NULL)
            {
            temp =temp->next;

        }
        temp->next=newnode;
    }


int main(){
    node *head=NULL;
    insertAtEnd(head,10);
    insertAtEnd(head,20);
    insertAtEnd(head,40);

    insertAtBeginning(head,5);

}

