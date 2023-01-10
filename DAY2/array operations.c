#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20],n,i,pos,num;
	printf("enter the number of eleemnts:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<=n;i++)
	{
		printf("\n a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("enter the elements to insert:");
	scanf("%d",&num);
	printf("enter the position to enter:");
	scanf("%d",&pos);
	for(i=n-1;i>=pos;i--)
	{
		a[i+1]=a[i];
		a[pos]=num;
		n=n+1;
	}
	printf("\n array elements after elements %d:",num);
	for(i=0;i<n;i++)
	{
		printf("\n a[%d]=%d",i,a[i]);
	}
	printf("enter the position to delete:");
	scanf("%d",&pos);
	for(i=pos;i<n-1;i++)
	{
		a[i+1]=a[i];
		n--;
	}
	printf("\n array after deleting :");
	for(i=0;i<n;i++)
	{
		printf("\n a[%d]=%d",i,a[i]);
	}
return 0;
}
