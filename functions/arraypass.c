#include<stdio.h>
int fun(int A[5],int n);
void main()
{
	int A[5],i,n;
	printf("enter size of matrix:\n");
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{
		scanf("%d",A[i]);
	}
	fun(A,n);
}
int fun(int B[], int n)
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d",B[i]);
	}
}
