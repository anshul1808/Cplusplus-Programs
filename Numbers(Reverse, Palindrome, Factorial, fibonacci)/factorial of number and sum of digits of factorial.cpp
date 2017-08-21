#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int num,fact=1,i,sum=0;
	cout<<"Enter the number";
	cin>>num;
	while(num>1)
	{
		fact=fact*num;
		num--;
	}
	printf("the fact of number is %d", fact);
	
	while(fact>=9)
	{
		i=fact%10;
		sum=sum+i;
		fact=fact/10;
	}
	sum=fact+sum;
	cout<<"\n"<<"the sum of factorial is :" <<sum; 
	getch();	
}
