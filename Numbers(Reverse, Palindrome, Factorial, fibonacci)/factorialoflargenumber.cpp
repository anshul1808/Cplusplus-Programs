#include<stdio.h>
using namespace std;
main()
{
	int num,temp,x,cases;
	int arr[200];
	//printf("Enter number of test cases");
	scanf("%d", &cases);
	
	while(cases>0)
	{
	int count=1,carry=0;
	//printf("ENter the number");
	scanf("%d", &num);
	arr[0]=1;
	
	for(int i=2; i<=num; i++ )
	{
		for(int j=0; j<count;j++)
		{
			x=arr[j]*i+carry;
			arr[j]=x%10;
			carry=x/10;
		}
		
		while(carry>0)
		{
			arr[count]=carry%10;
			carry=carry/10;
			count++;
		}
	}
	count--;
	while(count>=0)
	{
		printf("%d",arr[count]);
		arr[count]=0;
		count--;
	}
	printf("\n");
	cases--;
	}
}
