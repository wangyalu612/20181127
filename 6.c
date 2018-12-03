#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
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
struct Node* Delete(struct Node* head, int val)
{
	struct Node* p,*np;
	p=head;
	np=NULL;
	while(p!=NULL)
	{
	if(p->data =val)
	{   np=p;
		p=p->next;
		free(np);
		np=(struct Node*)malloc(sizeof(struct Node));
	}
	}
	if(head==NULL)
	{
		return NULL;
	}
		return head;
}
int main()
{
	int val;
	struct Node *head;
	scanf("%d",&val);
    Delete(head,val);
	output(head);
	return 0;
}
