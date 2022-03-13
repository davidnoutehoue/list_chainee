#include <stdio.h>
#include <stdlib.h>

struct node
{
    int val;
    struct node*next;
};
/**
struct node *init_node(void);
struct node *new_node(int val);
struct node *addHead(struct node *head,int new_node);
void addTail(struct node *head,int new_node);
void display_list( struct node *head);
**/
struct node *init_node(void)
{
    struct node *n=(struct node*)malloc(sizeof(struct node*));
    n->val= -1;
    return n;
 }

  struct node*list(int n)
{
  struct node *p,*head,*val;
  int x,i;

  p=malloc(sizeof(struct node));
  scanf("%d",&x);
  p->val=x;
  p->next=NULL;
  head=p;

  for(i=1;i<n;i++){
    val=p;
    p=malloc(sizeof(struct node));
    scanf("%d",&x);
    p->val=x;
    p->next=NULL;
    val->next=p;
  }
  return head;
  }

struct node *addHead(struct node *head, int val){
  struct node *p=(struct note*)malloc(sizeof(struct node));
  p->val=val;
  p->next=head;
  head=p;
  return head;
  }

void addTail(struct node *head,int val)
{
    struct node *p=malloc(sizeof(struct node));
  p->val=val;
  p->next=NULL;
    if(head->val == -1)
    {
        addHead(head, val);
    }

    while(head->next != NULL)
    {
        head = head->next;
    }

  head->next=p;
}

void display_list( struct node *head)
{

    while(head != NULL)
    {

        printf("%d->",head->val);
        head=head->next;
    }
    printf("NULL");
}


int main(int argc,char*argv[])
{
  struct node *head;
  //head=init_node();
  head=list(5);
  display_list(head);
  printf("\n");
  head=addHead(head,15);
  display_list(head);
  printf("\n");
  addTail(head,38);
  display_list(head);

}


