//************fact using resursion
#include<iostream>
#include<conio.h>
using namespace std;
int factrev(int x);
main()
{	
	int num,x;
	cout<<"Enter the number";
	cin>>num;
	factrev(num);
	cout<<"\n the factorial is :"<<factrev(num)<<endl;
}

int factrev(int x)
{
	if (x<=1)
	return(1);
	
	else
	{
		x=x*(factrev(x-1));
		return x;
	}
	
}
