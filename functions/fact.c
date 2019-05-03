#include<stdio.h>
int fact(int n);
void main()
{
	int n,k;
	printf("enter n value:\n");
	scanf("%d",&n);
	fact(n);
	printf("fact of given number=%d\n",k);
}
int fact(int *a)
{
	int n;
	if(a==0)
	return 1;
	else
	n= a * fact((*a)-1);
	return n;
}

