#include <stdio.h>
int main()
{
	int i,j,k;
	int num,sum=0;
	scanf("%d",&num);
	while(num>0)
	{
		for(int i=1; i*i<=(num); i++ )
		{
			if(num%i==0)
			{
				sum++;
			}
		}
		num--;
	}
	printf("%d",sum);
}
