#include<stdio.h>
#define N 40000
int main()
{
	int i,j,n=0,k=0;
	int a[N];
    scanf("%d",&n);
    for(i=0;i<n;i++)
	{
 		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				k++;
			}
		}
	printf("%d",k);
	printf("\n");
	return 0;
}
