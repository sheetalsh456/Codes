#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head;
int n;
void main()
{
    int i,n,ans,count,countloop;
    struct node *temp,*p,*p1,*p2;
    temp=(struct node *)malloc(sizeof(struct node));
    head=(struct node *)malloc(sizeof(struct node));
    p1=(struct node *)malloc(sizeof(struct node));
    p2=(struct node *)malloc(sizeof(struct node));
    head=NULL;
    temp=NULL;
    p1=head;
    p2=head;
    printf("enter no.of elements\n");
    scanf("%d",&n);
    printf("enter elements\n");
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
        {
            head=temp;
        }
    }
    ans=0;
    count=1;
    while(p2!=NULL && p2->next!=NULL)
    {
        p1=p1->next;
        p2=p2->next->next;
        if(p1==p2)
        {
            p1=p1->next;
            while(p1!=p2)
            {
                p1=p1->next;
                count++;
            }
            ans=1;
            p1=head;
            countloop=1;
            while(p1!=p2)
            {
                p1=p1->next;
                p2=p2->next;
                countloop++;
            }
            break;
        }
    }
    if(ans==1)
        printf("loop exists\n");
    else
        printf("loop doesnt exist\n");
}
