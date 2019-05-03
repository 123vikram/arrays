#include<stdio.h>
int add(int ,int );
void main()

{
	int a=10,b=20,sum;
	sum=add(&a,&b);
	printf("sum=%d\n",sum);
}
int add(int a ,int b)
{
	int c;
	c=a+b;
	return c;
}

