#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int num;
	cout<<"Enter the number up to which you want fibonaci series";
	cin>>num;
	num=num-2;
	int a,b,c;
	a=1,b=2;
	printf("%d %d ", a,b);
	while(num>0)
	{	
		c=a+b;
		cout<<c<<" ";
		num--;
		
		if(num<=0)
		break;
		else
		{
		a=c+b;
		cout<<a<<" ";
		num--;
		}
		
		if(num<=0)
		break;
		{
		b=a+c;
		cout<<b<<" " ;
		num--;
		}
	}
}
