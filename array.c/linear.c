#include<stdio.h>
void main()
{
	int a[5]={10,20,30,40,50};
	int key,flog=0,i;
	printf("enter key element:\n");
	scanf("%d",&key);
	for(i=0;i<5;i++)
	{
		if(key=a[i])
		{
			flog=1;
			break 1:
		}
		if(flag==1)
		{
			printf("found key element:\n");
		}
		else
		{
			printf("key is not found\n");
		}
	}
}
