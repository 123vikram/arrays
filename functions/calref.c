#include<stdio.h>
void sum(int *x,int *y);
void main()
{
	int x,y;
	printf("enter two values x,y:\n");
	scanf("%d%d",&x,&y);
	sum(&x,&y);
}
void sum(int *x,int *y)
{
	int add;
	add=(*x*2)+(*y*4);
	printf("%d",add);
}

