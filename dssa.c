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
    while(ptr!=NULL)
    {
        printf("digit in node %d\n",ptr->digit);
        ptr=ptr->next;
    }
}
struct node * del_at_first(struct node *head)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr=head;
    head=head->next;
    free(ptr);
    return head;

}
void del_at_last(struct node *head)
{
    struct node *p=(struct node *)malloc(sizeof(struct node));
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    p=head;
    ptr=head;
    int i=0;
    while (ptr->next!=NULL)
    {
        ptr=ptr->next;
        i=i+1;
    }

    int j=0;
    while(j!=i-1)  
    {
        p=p->next;
        j=j+1;
    }
    p->next=NULL;
    free(ptr);
       
}

void del_in_btw(struct node *head,int n)
{
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=(struct node *)malloc(sizeof(struct node));
    p=head;
    ptr=head;
    int i=0;
    while(i!=n-1)
    {
        ptr=ptr->next;
        i=i+1;
    }
    int j=0;
    while(j!=i-1)
    {
        p=p->next;
        j=j+1;
    }
    p->next=ptr->next;
    free(ptr);
}
int main(){
  struct node *head=(struct node *)malloc(sizeof(struct node)); 
  struct node *s=(struct node *)malloc(sizeof(struct node)); 
  struct node *t=(struct node *)malloc(sizeof(struct node)); 
  struct node *f=(struct node *)malloc(sizeof(struct node)); 
  struct node *last=(struct node *)malloc(sizeof(struct node)); 
  head->digit=25;
  head->next=s;
  s->digit=9;
  s->next=t;
  t->digit=46;
  t->next=f;
  f->digit=96;
  f->next=last;
  last->digit=76;
  last->next=NULL;
  traverse(head);
  //head=del_at_first(head);
  printf("Traversing after deletion\n");
  //del_at_last(head);
  del_in_btw(head,3);
  traverse(head);
  

  

  

    return 0;
}
