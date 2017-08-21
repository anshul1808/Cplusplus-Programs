#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	char str1[1000], str2[1000];
	int count,sum=0;
	puts("ENter the strings");
	gets(str1);
	gets(str2);
	count=0;
	int nos=0;
	bool x=true;
	while(str1[count]!='\0')
	{
		count++;
	}
	
	while(str2[nos]!='\0')
	{
		nos++;
	}
	int i=0,j=0;
	while(str1[i]!='\0')
	{
		if(str1[i]==str2[j])
		{
			i++;
			j++;
		}
		else
		{
		printf("all char are not present");
		break;
		}
	}
	if(str1[i]==str2[j])
	{
		puts("strings are same");
	}
	
}
