#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head,*end;
int n;
void insertnode()
{
    int pos,value,i;
    struct node *temp1,*left,*right;
    temp1=(struct node *)malloc(sizeof(struct node));
    left=(struct node *)malloc(sizeof(struct node));
    right=(struct node *)malloc(sizeof(struct node));
    printf("enter position at which u wanna insert\n");
    scanf("%d",&pos);
    printf("enter value to be inserted\n");
    scanf("%d",&value);
    right=head;
    if(pos==1)
    {
        temp1->data=value;
        end->next=temp1;
        temp1->next=head;
        head=temp1;
    }
    else
    {
    for(i=1;i<pos;i++)
    {
        left=right;
        right=right->next;
    }
    temp1->data=value;
    left->next=temp1;
    temp1->next=right;
    }
}
void deletenode()
{
    struct node *temp2,*prev;
    int pos1,i;
    temp2=(struct node *)malloc(sizeof(struct node));
    prev=(struct node *)malloc(sizeof(struct node));
    temp2=head;
    printf("enter position to delete\n");
    scanf("%d",&pos1);
    i=2;
    if(pos1==1)
    {
        end->next=temp2->next;
        head=temp2->next;
    }
    else
    {
        temp2=temp2->next;
        while(temp2!=head)
        {
           if(i==pos1)
           {
               prev->next=temp2->next;
               free(temp2);
               break;
           }
           else
           {
               prev=temp2;
               temp2=temp2->next;
               i++;
           }
        }
    }
}
void display()
{
    struct node *temp3;
    temp3=(struct node *)malloc(sizeof(struct node));
    temp3=head;
    printf("%d\n",(temp3->data));
    temp3=temp3->next;
    while(temp3!=head)
    {
        printf("%d\n",(temp3->data));
        temp3=temp3->next;
    }
}
void main()
{
    int i,option;
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
        p->next=head;
        if(temp!=NULL)
            temp->next=p;
        temp=p;
        if(head==NULL)
            head=temp;
    }
    end=p;
    while(1)
    {
        printf("enter 1 to insert, 2 to delete, 3 to display, 4 to exit\n");
        scanf("%d",&option);
        switch(option)
        {
            case 1:insertnode();
                   break;
            case 2:deletenode();
                   break;
            case 3:display();
                   break;
        }
        if(option==4)
            break;
    }
}
