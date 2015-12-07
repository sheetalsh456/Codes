#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct stack
{
    struct node *queue1;
    struct node *queue2;
}*end1,*end2;
void push(struct stack *s,int new_data)
{
    enqueue(&s->queue2,new_data);
    if(s->queue2==NULL)
    {
        while(s->queue1!=NULL)
        {
            x=dequeue(&s->queue1);
            enqueue(&s->queue2,x);
        }
    }
}
int pop(struct stack *s)
{
    int x;
    x=dequeue(&s->queue1);
    return x;
}
void enqueue(struct node **top_ref,int b)
{
    struct node *curr;
    curr=(*top_ref);
    while(curr)
}
int main()
{
    struct stack *s=(struct stack *)malloc(sizeof(struct stack));
    s->queue1=NULL;
    s->queue2=NULL;
    printf("enter number to be pushed to stack\n");
    scanf("%d",&x1);
    push(s,x1);
    push(s,4);
    push(s,6);
    printf("the popped value is:%d\n",pop(s));
    return 0;
}
