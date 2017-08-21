#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	char arr[100],ch;
	int count=0,i=0,j=0,end,a=0,k=0;
	cout<<"Enter the sentence \n";
	gets(arr);
	while(arr[count]!='\0')
	{
		count++;
	}
	
	while(i<=count)
	{
		if(arr[i]==' ' || arr[i]=='\0')
		{
			end=i;
			a=end;
			a--;
			while(j<=a)
			{
				cout<<arr[a];
				a--;
			}
			cout<<" ";
			j=end+1;
		}
		i++;
	}
	
	
	
}
