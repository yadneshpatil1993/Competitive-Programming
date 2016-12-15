#include<iostream>

using namespace std;

void tree();

struct node
{
    int data;
    struct node *Lchild;
    struct node *Rchild;
};
struct node *head,*ptr;

int main()
{
    cout<<"enter the tree:";
    head=NULL;
    tree();
    return 0;
}

void tree()
{
    int l=0,r=0;
    ptr = new(struct node);
    cin>>ptr->data;
    cout<<"enter 1 if there is a left child "<endl;
    cin>>l;
    if(l==1)
    {
        tree(ptr->Lchild);
    }
    else
    {

    }
    cout<<"enter 1 if there is a left child "<endl;
    cin>>r;

}
