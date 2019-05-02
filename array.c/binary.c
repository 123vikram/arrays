#include<stdio.h>
void main()
{
	int A[6]={10,20,30,40,50,60},low=0,high=1,mid;
	int i,flag=0,key=50;
	while(low<high)
	{
		mid=(low+high)/2;
		if(key==A[mid])
		{
			flag=1;
			break;
		}
		else if(key<A[mid])
		{
			high=mid+1;
		}
		else
		{
			low=mid-1;
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

