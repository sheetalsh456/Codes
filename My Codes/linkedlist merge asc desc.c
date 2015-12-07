#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head,*asc,*des,*ahead,*dhead;
struct node *mergelist(struct node *ahead1,struct node *dhead1);
int n;
void splitlist()
{
    struct node *curr;
    asc=(struct node *)malloc(sizeof(struct node));
    des=(struct node *)malloc(sizeof(struct node));
    curr=(struct node *)malloc(sizeof(struct node));
    curr=head;
    ahead=NULL;
    dhead=NULL;
    while(curr)
    {
        asc->next=curr;
        asc=asc->next;
        if(ahead==NULL)
            ahead=asc;
        curr=curr->next;
        if(curr)
        {
            des->next=curr;
            des=des->next;
        if(dhead==NULL)
            dhead=des;
            curr=curr->next;
        }
    }
    asc->next=NULL;
    des->next=NULL;
}
void reverselist()
{
    struct node *left,*right,*ptr;
    left=(struct node *)malloc(sizeof(struct node));
    right=(struct node *)malloc(sizeof(struct node));
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr=dhead;
    left=NULL;
    while(ptr!=NULL)
    {
        right=ptr->next;
        ptr->next=left;
        left=ptr;
        ptr=right;
    }
    dhead=left;
}
struct node *mergelist(struct node *ahead1,struct node *dhead1)
{
    struct node *temp1;
    if(!ahead1)
        return dhead1;
    else if(!dhead1)
        return ahead1;
    else
    {
        temp1=(struct node *)malloc(sizeof(struct node));
        temp1=NULL;
        if((ahead1->data)<(dhead1->data))
        {
            temp1=ahead1;
            ahead1->next=mergelist(ahead1->next,dhead1);
        }
        else
        {
            temp1=dhead1;
            dhead1->next=mergelist(ahead1,dhead1->next);
        }
    }
    return temp1;
}
void display()
{
    struct node *temp2;
    temp2=(struct node *)malloc(sizeof(struct node));
    temp2=head;
    while(temp2!=NULL)
    {
        printf("%d\n",(temp2->data));
        temp2=temp2->next;
    }
}
void main()
{
    int i;
    struct node *temp,*p;
    temp=(struct node *)malloc(sizeof(struct node));
    head=(struct node *)malloc(sizeof(struct node));
    temp=NULL;
    head=NULL;
    printf("enter no.of elements\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++)
    {
        p=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&(p->data));
        p->next=NULL;
        if(temp!=NULL)
            temp->next=p;
        temp=p;
        if(head==NULL)
            head=temp;
    }
    splitlist();
    reverselist();
    head=mergelist(ahead,dhead);
    display();
}
