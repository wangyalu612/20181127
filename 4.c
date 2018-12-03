#include<stdio.h>
#include<stdlib.h>
struct Node {
	int val;
	struct Node *next;
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
struct Node* insert(struct Node* head, int val)
{
	struct Node *newp,*p,*prev;
    p=head,prev=NULL;
	while(p!=NULL)
	{
		if(p->val >newp->val)
			break;
		p=p->next ;
	}
	newp->next =p;
	if(p==head)
		head=newp;
	else
		prev->next =newp;
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
