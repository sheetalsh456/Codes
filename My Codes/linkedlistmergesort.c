#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head;
void mergesort(struct node **headref)
{
    struct node *head=*headref;
    struct node *a;
    struct node *b;
    if(head==NULL || head->next==NULL)
        return;
    split(head,&a,&b);
    mergesort(&a);
    mergesort(&b);
    *headref=sortedmerge(a,b);
}
void split(struct node *source,struct node **headref,struct node **backref)
{
    struct node *slow;
    struct node *fast;
    if(source==NULL || source->next==NULL)
    {
        *headref=source;
        *backref=NULL;
    }
    else
    {
        slow=source;
        fast=source->next;
        while(fast!=NULL)
        {
            fast=fast->next;
            if(fast!=NULL)
            {
                fast=fast->next;
                slow=slow->next;
            }
        }
        *headref=source;
        *backref=slow->next;
        slow->next=NULL;

    }
}
struct node *sortedmerge(struct node *a,struct node *b)
{
    struct node *result=NULL;
    if(a==NULL)
        return b;
    if(b==NULL)
        return a;
    if(a->data<=b->data)
    {
        result=a;
        result->next=sortedmerge(a->next,b);
    }
    else
    {
        result=b;
        result->next=sortedmerge(a,b->next);
    }
    return result;
}
void display()
{
    struct node *temp;
    temp=(struct node *)mallox(sizeof(struct node));
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
void main()
{
    int
    struct node *temp,*p;
    temp=(struct node *)malloc(sizeof(struct node));
    head=(struct node *)malloc(sizeof(struct node));
    head=NULL;
    temp=NULL;
    printf("enter no.of elements\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    {
        p=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&(p->data));
        p->next=NULL;
        if(temp!=NULL)
        {
            temp->next=p;
        }
        temp=p;
        if(head==NULL)
            head=temp;
    }
    mergesort(&p);
    display();
}

