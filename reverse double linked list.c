#include <stdio.h>
#include <stdlib.h>
 struct node
{
  int data;
  struct node *next;
  struct node *prev;    
};
 struct node* newNode(struct node* head,int data){
	 struct node *p,*temp= (struct node*)malloc(sizeof(struct node));
	 temp->data=data;
	 temp->next=NULL;
	 temp->prev=NULL;
	 if(head ==NULL)
	 return temp;
	 p=head;
	 while(p->next!=NULL){
	 p=p->next;}
	 p->next=temp;
	 temp->prev=p;
	 return head; 
	 }
void reverse(struct node **head_ref);
void printList(struct node *node)
{
  while(node!=NULL)
  {
   printf("%d ", node->data);
   node = node->next;
  }
  printf("");
} 
 int main()
{
  int t,x,n,i;
  scanf("%d",&t);
  while(t--)
  {
  struct node *temp,*head = NULL;
  scanf("%d",&n);
  for(i=0;i<n;i++){
  scanf("%d",&x);
  head=newNode(head, x);
  }
  reverse(&head);  
  printList(head);
  while(head->next!=NULL)
  {
	  temp=head;
	  head=head->next;
	  free(temp);
	  }       
	}
	return 0;
}
}
void reverse(struct node **head_ref)
{
   struct node *current=*head_ref,*temp=NULL;
   while(current!=NULL)
   {
       temp=current->prev;
       current->prev=current->next;
       current->next=temp;
       current=current->prev;
       
       if(temp!=NULL)
         *head_ref=temp->prev;
   }
}
