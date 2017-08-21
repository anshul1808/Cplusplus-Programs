#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int i=4, j=1, k=0;
	for(i=0;i<3;i++)
	{
		k += j;
		j =1-j;
	}
	cout<<k;
}

