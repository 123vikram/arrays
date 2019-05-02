#include<stdio.h>
void main()
{
	int A[3],B[3],c[3],i,j;
	printf("enter a mix value");
	//scanf("%d%d",&A[i],&B[i]);
	for(i=0;i<3;i++)
	{
		scanf("%d",A[i]);
	}
	for(j=0;j<3;j++)
	{
		scanf("%d",B[j]);
	}
	//printf("%d%d",A[i],B[j]);
	for(i=0;i<3;i++)
	{
		c[i]=(A[i]+B[j]);
	}
	for(i=0;i<3;i++)
		printf("%d\n",c[i]);
}


