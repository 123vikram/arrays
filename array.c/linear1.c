#include<stdio.h>
void main()
{
	int A[5]={10,20,30,40,50};
	int flag=0,key,i;
	printf("enter key element:\n");
	scanf("%d",&key);
	for(i=0;i<5;i++)
	{
		if(key==A[i])
		{
			flag=1;
			break;
		}
	}
		if(flag==1)
		{
			printf("key is found:\n");
		}
		else
		{
			printf("key is not found:\n");
		}
}
