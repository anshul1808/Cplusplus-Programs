#include<iostream>
#include<conio.h>
int pow(int a, int b);
using namespace std;
main()
{
	int a,b,r;
	cout<<"Enter the numbers";
	cin>>a>>b;
	r= pow(a,b);
	cout<<"THE VALUE OF POWER IS : "<<r;
}

int pow(int a, int b)
{
	int z;
	if(b==0)
	return(1);
	else
	z= a*pow(a,b-1);
	return(z);
}
