Node *addOne(Node *head)
{
   struct Node *temp1=head,*newtemp=NULL,*temp2=head;
   int n=0;
   while(temp1!=NULL)
   { 
       int r=temp1->data;
       n=n*10+r;
       temp1=temp1->next;
   }
   n=n+1;
   while(n!=0)
   {
       if(newtemp==NULL)
       newtemp=temp2=newNode(n%10);
       else
       {
         temp2->next=newNode(n%10);
         temp2=temp2->next;
       }
       n/=10;
   }
   	newtemp = ZZZZZZZZZZ(newtemp);
   return newtemp;
       
   }
