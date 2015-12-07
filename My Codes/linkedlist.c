#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head;
int n;
void insert()
{
    int i,pos,num;
    struct node *temp=NULL,*right,*left;
    left=(struct node *)malloc(sizeof(struct node));
    right=(struct node *)malloc(sizeof(struct node));
    temp=(struct node *)malloc(sizeof(struct node));
    right=head;
    printf("enter the position at which u insert\n");
    scanf("%d",&pos);
    printf("enter the number which u wanna insert\n");
    scanf("%d",&num);
    if(head!=NULL)
    {
    for(i=1;i<pos;i++)
    {
        left=right;
        right=right->next;
    }
    temp->data=num;
    left->next=temp;
    temp->next=right;
    }
    else
    {
        head=temp;
        temp->next=NULL;
    }
}
void delete()
{
    int i,pos1;
    struct node *temp,*prev;
    temp=(struct node *)malloc(sizeof(struct node));
    prev=(struct node *)malloc(sizeof(struct node));
    temp=head;
    printf("enter the position which u wanna delete\n");
    scanf("%d",&pos1);
    i=1;
    while(temp!=NULL)
    {
        if(i==pos1)
        {
            if(temp==head)
            {
                head=temp->next;
            }
            else
            {
                prev->next=temp->next;
            }
        }
        else
        {
            prev=temp;
            temp=temp->next;
        }
        i++;
    }
}
void display()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp=head;
    if(temp==NULL)
    {
        printf("list is empty\n");
    }
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
void main()
{
    int option,i;
    struct node *temp,*p;
    temp=(struct node *)malloc(sizeof(struct node));
    head=(struct node *)malloc(sizeof(struct node));
    head=NULL; temp = NULL;
    printf("enter value of n \n");
    scanf("%d",&n);
    printf("enter the numbers one below the other\n");
    for(i=0;i<n;i++)
    {
        p=(struct node *)malloc(sizeof(struct node));
         scanf("%d",&(p->data));
         p->next=NULL;
        if(temp!=NULL)
            temp->next=p;
       //     else
        temp=p;

        if(head==NULL)
            head=temp;
    }
    while(1)
    {
        printf("enter 1 to insert a new node, 2 to delete a node, 3 to display and 4 to exit\n");
        scanf("%d",&option);
        switch(option)
        {
            case 1:insert();
                break;
            case 2: delete();
            break;
            case 3: display();
            break;
        }
        if(option==4)
            break;
    }
}

