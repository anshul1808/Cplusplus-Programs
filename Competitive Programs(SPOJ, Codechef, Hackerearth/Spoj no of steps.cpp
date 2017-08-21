#include<stdio.h>
using namespace std;
main()
{
	int i,j,k,t;
	scanf("%d",&t);//no of test cases;
	while(t>0)
	{	
		scanf("%d %d", &i, &j);
		if(i%2==0 && j%2==0 && i>=j && i-j<=2)
		{
			k=i+j;
			printf("%d\n",k);
		}
		else if(i%2==1 && j%2==1 && i>=j && i-j<=2 )
		{
			k=i+j-1;
			printf("%d\n",k);
		}
		else
		{
			printf("No Number\n");
		}
		t--;
	}
	
}
