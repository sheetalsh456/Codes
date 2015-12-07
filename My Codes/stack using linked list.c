#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head;
int n;
void pushing()
{
    struct node *temp1;
    temp1=(struct node *)malloc(sizeof(struct node));
    printf("enter the number to be pushed\n");
    scanf("%d",&(temp1->data));
    temp1->next=head;
    head=temp1;
}
void popping()
{
    struct node *temp2;
    temp2=(struct node *)malloc(sizeof(struct node));
    temp2=head;
    head=temp2->next;
}
void display()
{
    struct node *temp3;
    temp3=(struct node *)malloc(sizeof(struct node));
    temp3=head;
    while(temp3!=NULL)
    {
        printf("%d\n",(temp3->data));
        temp3=temp3->next;
    }
}
void main()
{
    int i,option;
    struct node *temp,*p;
    head=(struct node *)malloc(sizeof(struct node));
    temp=(struct node *)malloc(sizeof(struct node));
    head=NULL;
    temp=NULL;
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
    while(1)
    {
        printf("enter 1 to push, 2 to pop, 3 to display and 4 to exit\n");
        scanf("%d",&option);
        switch(option)
        {
            case 1:pushing();
                   break;
            case 2:popping();
                   break;
            case 3:display();
                   break;
        }
        if(option==4)
            break;
    }
}
