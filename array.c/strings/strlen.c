#include<stdio.h>
void main()
{
	char str1[10];
       float i,count=0;
	printf("enter a string\n");
	gets(str1);
	for(i=0;str1[i]!='\0';i++)
	{
  		count++;
	}
	printf("length of the given string%f\n",count);
}

