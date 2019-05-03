#include<stdio.h>
int sum(int x,int y);
void main()
{
	int x,y,add;
//	printf("enter two numbers x,y values:\n");
//	scanf("%d%d",&x,&y);
	add=sum(10,20);
	printf("add=%d\n",add);
}
int sum(int x,int y)
{
	return x+y;
}

