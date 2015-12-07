#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct queue
{
    struct node *stack1;
    struct node *stack2;
};
void enqueue(struct queue *q,int a)
{
    pushing(&q->stack1,a);
}
void pushing(struct node **top_ref,int new_data)
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=new_data;
    temp->next=(*top_ref);
    (*top_ref)=temp;
}
int dequeue(struct queue *q)
{
    int x;
    if(q->stack1==NULL && q->stack2==NULL)
    {
        printf("empty\n");
        return -1;
    }
    if(q->stack2==NULL)
    {
        while(q->stack1!=NULL)
        {
            x=popping(&q->stack1);
            pushing(&q->stack2,x);
        }
    }
    x=popping(&q->stack2);
    return x;
}
int popping(struct node **top_ref)
{
    int res;
    struct node *top;
    if(*top_ref==NULL)
    {
        printf("empty\n");
        return -1;
    }
    top=*top_ref;
    res=top->data;
    *top_ref=top->next;
    free(top);
    return res;
}
int main()
{
    int x1;
    struct queue *q=(struct queue *)malloc(sizeof(struct queue));
    q->stack1=NULL;
    q->stack2=NULL;
    printf("enter number to be pushed\n");
    scanf("%d",&x1);
    enqueue(q,x1);
    enqueue(q,6);
    enqueue(q,9);
    printf("the dequeued value : %d\n",dequeue(q));
    printf("the dequeued value : %d\n",dequeue(q));
    printf("the dequeued value : %d\n",dequeue(q));
    return 0;
}
