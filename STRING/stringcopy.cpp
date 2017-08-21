// ************ copy string*************//
#include<stdio.h>
#include<string.h>
#include<conio.h>
void stringcopy(char *tar, char *source);
using namespace std;
main()
{
	char str1[2000], str2[2000], str3[2000], str4[2000];
	puts("Ener the string\n");
	gets(str1);
	printf("\n*************************** BY STRCPY FUNC***************************\n");
	strcpy(str2,str1);
	printf("the str2 string is := %s\n", str2);
	
	printf("\n*************************** BY creating fucn***************************\n");
	printf("enter the string");
	gets(str3);
	stringcopy(str4,str3);
	printf("the str4 string is := %s\n", str4);
}

void stringcopy(char *tar, char *source)
{
	while(*source!='\0')
	{
		*tar=*source;
		source++;
		tar++;
	}
	*tar='\0';	
}
