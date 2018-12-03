#include<stdio.h>
#include<stdlib.h>
struct Node {
	int val;
	struct Node* next;
};
void output(struct Node *head)
{
	struct Node *p;
	p=head;
	while(p!=NULL)
	{
		printf("%d ",p->val);
		p=p->next;
	}
}
struct Node* Delete(struct Node* head, struct Node* target)
{
   struct Node *p;
   p=target;
   target=target->next;
   free(p);
   if(head==NULL)
   {
	   return NULL;
   }
   return head;
}
int main()
{
	struct Node *head,*target;
	Delete(head,target);
	output(head);
	return 0;
}
