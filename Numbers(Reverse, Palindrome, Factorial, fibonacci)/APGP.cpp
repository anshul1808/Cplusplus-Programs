#include<stdio.h>
#include<stdlib.h>
using namespace std;
main()
{
	int a,b,c,x,i;
	while(true)
	{
		scanf("%d %d %d", &a, &b, &c);
		if(a==0 && b==0 && c==0)
		{
			printf("\n");
			exit(0);
		}
		
		else if(c-b==b-a)
		{
			x=c-b;
			c=c+x;
			printf("AP %d\n", c);
		}
		
		else
		{
			x=c/b;
			c=c*x;
			printf("GP %d\n", c);
		}
	}
}
