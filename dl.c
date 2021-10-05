#include<stdio.h>
#include<stdlib.h>

struct node
{
    int digit;
    struct node *next;
};
void traverse(struct node *head)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr=head;
    while(1==1)
    {
        printf("Value in the node %d\n",ptr->digit);
        ptr=ptr->next;
        if(ptr==head)
        {
            break;
        }
    }
}
struct node * mfun(struct node *head)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=(struct node *)malloc(sizeof(struct node));
    ptr=head;
    int s=0;
    int d=ptr->digit;
    while(d!=0)
    {
        int r=d%10;
        d=d/10;
        s=s+r;
    }
    if(s%2==0)
    {
        printf("Digit sum is even\n");
        ptr=ptr->next;
        free(head);
        return ptr;
    }
    s=0;
    int r=0;
    ptr=ptr->next;
    p=head;
    while(1==1)
    {
        d=ptr->digit;
        while(d!=0)
        {
            r=d%10;
            d=d/10;
            s=s+r;
        }
        if(s%2==0)
        {
            printf("Digit sum is even\n");
            p->next=ptr->next;
        }
        ptr=ptr->next;
        s=0;
        r=0;
        if(ptr==head)
        {
            return p;
        }
    }
}
int main()
{
    struct node *head=(struct node *)malloc(sizeof(struct node));
    struct node *s=(struct node *)malloc(sizeof(struct node));
    struct node *t=(struct node *)malloc(sizeof(struct node));
    struct node *f=(struct node *)malloc(sizeof(struct node));
    struct node *last=(struct node *)malloc(sizeof(struct node));

    head->digit=9;
    head->next=s;

    s->digit=26;
    s->next=t;

    t->digit=76;
    t->next=f;

    f->digit=96;
    f->next=last;

    last->digit=86;
    last->next=head;

    traverse(head);
    head=mfun(head);
    traverse(head);

    



    return 0;
}
