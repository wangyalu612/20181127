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
struct Node* insert(struct Node* head, int val)
{
	struct Node *p,*newp;
	p=head;
	while(p!=NULL)
	{
		p=p->next ;
	}
	p=newp;
	return 0;
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
