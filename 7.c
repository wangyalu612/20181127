#include<stdio.h>
#include<stdlib.h>
struct Node {
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
struct Node *construct1(int arr[],int size)
{
   struct Node *end, *head=(struct Node *)malloc(sizeof(struct Node));
   head->next=NULL;
   end=head;
   int i;
   for(i=0;i<size;i++)
	{
		struct Node *p=(struct Node *)malloc(sizeof(struct Node));
		p->data=arr[i];
		end->next=p;
        end=p;
	}
	end->next=NULL;
	return head;
}
struct Node* reverse(struct Node* head)
{
	struct Node *reversefirst,*prev,*pnow;
	struct Node *pnext=pnow->next;
	if(head==NULL||head->next ==NULL)
    {
		return head;
	}
	prev=NULL;
	pnow=head->next;
	while(pnow!=NULL)
	{
		if(pnext=NULL)
		{
			reversefirst=pnow;}
		pnow->next=prev;
		prev=pnow;
		pnow=pnext;
	}
	head->next =reversefirst;
	return head;
}
int main()
{
	struct Node *head;
	int i,size=0;
	int a[10];
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
        size++;
	}
     head=construct1(a,size);
	 reverse(head);
	 output(head);
	 return 0;
}
