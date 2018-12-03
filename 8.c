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
struct Node *InsertBeforehead(struct Node *head,struct Node *newp)
{
   newp->next =head;
   head=newp;
   return head;
} 
struct Node *construct(int arr[],int size)
{
	struct Node *head,*newp;
	head=NULL;
	int i;
	for(i=size-1;i>=0;i--)
	{
		newp=(struct Node *)malloc(sizeof(struct Node));
		newp->data=arr[i];
        head=InsertBeforehead(head,newp);
	}
	return head;
}
struct Node* merge(struct Node* head1, struct Node* head2)
{
	struct Node* p1,*p2;
	p1=head1;
	p2=head2;
	struct Node* head3=NULL;
	while(p1!=NULL&&p2!=NULL)
	{
        struct Node* p3=(struct Node*)malloc(sizeof(struct Node));
		if(p1->data>p2->data)
		{
			p3->data =p1->data;
			p1=p1->next;
		}
		else
		{
			p3->data=p2->data;
		    p2=p2->next;
		}
			InsertBeforehead(head3,p3);
	}
	while(p1!=NULL)
	{
		struct Node* p3=(struct Node*)malloc(sizeof(struct Node));
        p3->data =p1->data;
		p1=p1->next;
		InsertBeforehead(head3,p3);
	}
	while(p2!=NULL)
	{
		struct Node* p3=(struct Node*)malloc(sizeof(struct Node));
        p3->data =p2->data;
		p2=p2->next;
		InsertBeforehead(head3,p3);
	}
	return head3;
}
int main()
{
	struct Node* head1,*head2,*head3;
	int i,size=0,size1=0;
	int a[10],b[10];
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
        size++;
	}
    for(i=0;i<10;i++)
	{
		scanf("%d",&b[i]);
        size1++;
	}
    head1=construct(a,size);
	head2=construct(b,size1);
	head3=merge(head1,head2);
    output(head3);
	return 0;
}
