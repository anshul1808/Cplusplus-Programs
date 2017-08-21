#include<stdio.h>
using namespace std;
main()
{
	int T, N, noz,x;
	//printf("Enter number of test cases");
	scanf("%d", &T);
	while(T>0)
	{	noz=0;
	//	printf("Enter number");
		scanf("%d",&N);
		x=5;
		while(x<=N)
		{
			noz=noz+(N/x);
			x=x*5;
		}
		printf("%d\n",noz );
		
		T--;
	}
}
