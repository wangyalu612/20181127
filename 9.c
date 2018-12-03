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
void deletehead(struct Node *head)
{
	struct Node *np;
	np=head;
	head=head->next;
	free(np);
}
void clear(struct Node* head)
{
	while(head!=NULL)
	{
	deletehead(head);
	}
}
int main()
{
	int k;
	struct Node *head;
	clear(head);
    k=sizeof(head);
	return 0;
}
