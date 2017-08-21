#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	char str[1000];
	int a=0,e=0,i=0,o=0,u=0,count,sum=0;
	puts("ENter the string");
	gets(str);
	count=0;
	while(str[count]!='\0')
	{
		count++;
	}
	while(count--)
	{
		if(str[count]=='a' || str[count]=='A')
		a++;
		
		if(str[count]=='e'|| str[count]=='E')
		e++;
		
		if(str[count]=='o'|| str[count]=='O')
		o++;
		
		if(str[count]=='i'|| str[count]=='I')
		i++;
		
		if(str[count]=='u'|| str[count]=='U')
		u++;
	}
	sum=a+i+o+u+e;
	printf("\n the number of vowels are %d", sum);
}
