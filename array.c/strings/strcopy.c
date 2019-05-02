#include<stdio.h>
void main()
{
	char str1[20],str2[20];
	int i;
	printf("enter two strings str1,str2:\n");
	gets(str1);
	gets(str2);
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	printf("copy of two strings 1 %s\n",str2);
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	printf("copy of string 2 %s\n",str2);
}


