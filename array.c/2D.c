#include<stdio.h>
void main()
{
	int i,j,n,m,p,q,A[100][100],B[100][100],C[100][100];
	printf("Enter n,m values\n");
	scanf("%d%d",&n,&m);
	printf("Enter the matrix values for A[%d][%d]\n",n,m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("Values of matrix A:\n");
	for( i=0; i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d \t",A[i][j]);
		}
		printf("\n");
	}
	printf("Enter the ize for matrix B:\n");
	scanf("%d%d",&p,&q);
	printf("Enter the second matrix B[%d][%d]:\n",p,q);
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<p;j++)
	{
		for (j=0;j<q;j++)
		{
			printf("%d\t",B[i][j]);
		}	
		printf("\n");
	}
	if(m== q)
	{
		printf("Addition of two matrix:\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				C[i][j]=(A[i][j] + B[i][j]);
			}
		}
		for (i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("%d\t",C[i][j]);
			}
			printf("\n");
		}

		printf("\n");
	}
	else
	{
		printf("Addition is not possible\n");
	}
}

