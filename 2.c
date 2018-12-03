#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node* next;
};
void output(struct Node *head)
{
	struct Node *p;
	p=head;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}
struct Node *InsertBeforehead(struct Node *head,struct Node *newp)
{
   newp->next =head;
   head=newp;
   return head;
}
struct Node* insert(struct Node* head, int val)
{
	struct Node *newp;
	newp=(struct Node *)malloc(sizeof(struct Node));
    newp->data=val;
    InsertBeforehead(head,newp);
	return head;
}
int main()
{
	int val;
	struct Node *head;
	scanf("%d",&val);
    insert(head,val);
	output(head);
	return 0;
}
