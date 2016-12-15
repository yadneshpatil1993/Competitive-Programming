#include<iostream>
#include<stdlib.h>
using namespace std;

void traverse();
void reverse();
void deletion();
void insertion();
void command();

struct node
{
    int data;
    struct node *link;
};

struct node *head, *ptr, *ptr1, *temp;

int main()
{
    int n,i=0;
    head = NULL;
    cout<<"Enter the no of nodes:"<<endl;
    cin>>n;
    for(i=0;i<n;i++){
    if(head==NULL)
    {
        ptr = new (struct node);
        cout<<"enter data :"<<endl;
        cin>>ptr->data;
        head=ptr;
    }
    else
    {
        ptr->link=new(struct node);
        ptr=ptr->link;
        cout<<"enter data:"<<endl;
        cin>>ptr->data;
        ptr->link= NULL;
    }
    }
    command();
    return 0;
}

void command()
{
    int com;
    cout<<"enter the operation you want to do:"<<endl;
    cout<<"codes:\ntraverse - 1\nreverse - 2\ndeletion - 3\ninsertion - 4\n";
    cin>>com;
    switch(com)
    {
        case 1 :
        {
            traverse();
            break;
        }
        case 2 :
        {
            reverse();
            break;
        }
        case 3 :
        {
            deletion();
            break;
        }
        case 4 :
        {
            insertion();
            break;
        }
        case 5 :
        {
            exit(0);
        }
    }
    command();
}

/*traverse*/
void traverse()
{
    ptr1 = head;
    int sum=0;
    while(ptr1 != NULL)
    {
        cout<<"node content "<<ptr1->data<<" "<<endl;
        sum += ptr1->data;
        ptr1 = ptr1->link;
    }
    cout<<"TRAVERSAL is successfull.\nsum of data of nodes is: "<<sum<<endl;
}

void reverse()
{
    ptr=head;
    while(ptr->link!=NULL)
    {
        temp = ptr->link;
        ptr->link = temp->link;
        temp->link = head;
        head = temp;
    }
}
void deletion()
{
    int k;
    cout<<"enter the node no want to delete :\n";
    cin>>k;
    ptr=head;
    for(int j=1;j<k-1;j++)
    {
        ptr = ptr->link;
    }
    temp = ptr->link;
    ptr->link = temp->link;
    temp->link = NULL;
}
void insertion()
{
    int k=0;
    cout<<"enter node no after you want to insert the new node:"<<endl;
    cin>>k;
    ptr = head;
    for(int j=1;j<k;j++)
    {
        ptr = ptr->link;
    }
    temp = ptr->link;
    ptr->link = new(struct node);
    cout<<"enter data:"<<endl;
    ptr= ptr->link;
    cin>>ptr->data;
    ptr->link=temp;
}
