#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int top;
    int size;
    int *arr;
};
int isempty(struct stack *ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    return 0;
}
int isfull(struct stack *ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    return 0;
}
int push(struct stack *ptr,int n)
{
    if(isfull(ptr))
    {
        return 0;
    }
    ptr->arr[ptr->top+1]=n;
    ptr->top++;
    return 1;
}
int pop(struct stack *ptr)
{
    if(isempty(ptr))
    {
        return 0;
    }
    int d=ptr->arr[ptr->top];
    ptr->top--;
}
int main(){
    struct stack *s=(struct stack *)malloc(sizeof(struct stack));
    s->top=-1;
    s->size=20;
    s->arr=(int *)malloc(s->size * sizeof(int));
    int c=push(s,5);
    int a=isempty(s);
    int b=isfull(s);
    printf("Isfull %d\n",b);
    printf("Isempty %d \n",a);
    int e=pop(s);
    
    return 0;
}
