#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	char str[1000];
	int i,count,sum=0,j=0;
	puts("ENter the string");
	gets(str);
	count=0;
	while(str[count]!='\0')
	{
		count++;
	}
	i=0;
	while(i<count)
	{
		printf("%c  %d\n", str[i], str[i]);
		j=(int)str[i];
		sum=sum+j;		
		i++;
		}
	printf("\n the sum of ascii of string is = %d ", sum);
}
