#include<stdio.h>
void ls_nr(int a[],int,int);
int main()
{
	int n,k;
	printf("enter the size of the elements:");
	scanf("%d",&n);
	int a[n];
	printf("enter the array elements:");
	for(int i=0;i<n;i++)
	{
	scanf("%d",&a[i]);	
	}
	printf("enter the element to be search:");
	scanf("%d",&k);
	ls_nr(a,n,k);
}
void ls_nr(int a[],int n,int k)
{
	int f=0,i;
	for(i=0;i<n;i++)
	{
		if(k==a[i])
		{
			printf("the element %d is found at location %d",k,i+1);
		f=1;
		break;
		}
	}
	if(f==0)
	{
		printf(" the element is not found");
	}
}