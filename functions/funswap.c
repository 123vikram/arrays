#include<stdio.h>
void swap(void);
void main()
{
	int a=10,b=30;
	printf("before swaping a=%d,b=%d:\n",a,b);
	swap();
	printf("after swaping a=%d,b=%d:\n",a,b);
}
void swap()
	{
		int a=10,b=30,temp;
		//swap = temp;
		temp=a;
		a=b;
		b=temp;
		return;
	}


