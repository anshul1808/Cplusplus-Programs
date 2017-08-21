#include<stdio.h>
#include<stdlib.h>
using namespace std;
main()
{
	int num,sum=0,i;
	while(true)
	{
		scanf("%d",&num);
		if(num==0)
		{
			printf("\n");
			exit(0);
		}
		while(num>0)
		{
			sum=sum+(num*num);
			num--;
		}
		printf("%d\n",sum );
		sum=0;
	}
}
