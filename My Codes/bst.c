#include<stdio.h>
#include<stdlib.h>
struct node
{
    int key;
    struct node *left,*right,*parent;
}*head;
struct node *insert(struct node *root,int data)
{
    if(root==NULL)
    {
        struct node*newnode=(struct node *)malloc(sizeof(struct node));
        newnode->left=newnode->right=newnode->parent=NULL;
        newnode->key=data;
        root=newnode;
        return root;
    }
    else if(data<root->key && root->left==NULL)
    {
        struct node *newnode=(struct node *)malloc(sizeof(struct node));
        newnode->left=newnode->right=NULL;
        newnode->parent=root;
        root->left=newnode;
        newnode->key=data;
        return root;
    }
    else if(data>root->key && root->right==NULL)
    {
        struct node *newnode=(struct node *)malloc(sizeof(struct node));
        newnode->left=newnode->right=NULL;
        newnode->parent=root;
        root->right=newnode;
        newnode->key=data;
        return root;
    }
    else if(data<root->key)
        insert(root->left,data);
    else
        insert(root->right,data);
    return root;
}

int main()
{

}
