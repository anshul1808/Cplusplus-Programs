//All the students should get candies equal to mean of the elements of the array,
//and if some candies are less than mean,Subtract it from mean and add it to the count.c+=mean-a[i];

#include<stdio.h>
#include<stdlib.h>
using namespace std;
main()
{
	int arr[10000];
	int N,i,sum=0,mean,nos=0;
	
	while(true)
	{
		scanf("%d",&N);
		if(N==(-1))
		{
			printf("\n");
			exit(0);
		}
		else
		{
			i=0;
			while(i<N)
			{
				scanf("%d", &arr[i]);
				sum=sum+arr[i];
				i++;
			}
			//printf("%d", sum);
			if(sum%N!=0)
			{
				printf("-1\n");
			}
			else
			{
				mean=sum/N;
				i=0;
				while(i<N)
				{	
					if(arr[i]<mean)
					{
						nos=nos+(mean-arr[i]);
					}
					i++;
				}
				printf("%d\n",nos);	
			}
		}
		nos=0;	
		sum=0;
	}
}
