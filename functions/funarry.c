#include<stdio.h>
int add(int arr[],int n);
void main()
{
	int a[3],i,b;
	printf("Enter size of array:\n");
	scanf("%d",&b);
	printf("Enter array elements:\n");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	add(a,b);
	printf(" single  dimentional array is:\n");
	for(i=0;i<3;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
int add(int b[],int c)
{
	int i;
	for(i=0;i<3;i++)
	{
		b[i]+=c;
	}
}
