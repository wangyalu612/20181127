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
/*头插法*/
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
     construct(a,size);
	 /*尾插法
     construct1(a,size);
	 */
	 output(head);
	 return 0;
}
