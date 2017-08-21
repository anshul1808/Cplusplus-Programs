#include<stdio.h>
using namespace std;
main()
{
	int cases, num,j,i=0,x,k,count,z,half;
	char arr[10000];
	scanf("%d", &cases);
	while(cases>0)
	{	
		/*count=0;	
		scanf("%d", &num);
		i=num;
		x=num;
		while(x>0)
		{
			i=x%10;
			arr[count]=i;
			count++;
			x=x/10;
		}
		half=count/2;
		i=0;
		j=count-1;
		while(i<j)
		{
			k=arr[i];
			arr[i]=arr[j];
			arr[j]=k;
			i++;
			j--;
		}
		*/
		scanf("%s",&arr);
		while(arr[i]!='\0')
		{
			printf("%c\n",arr[i]);
			i++;
		}
		count=i;
		
		
		if(count%2==0)
		{
			k=arr[half-1]*10+arr[half];
			if(k%11!=0)
			{
				while(k%11!=0)
				{
					k++;
				}
				arr[half-1]=k%10;
			}
			else
			{	
				i=half-1;
				j=half;
				while(arr[i]==arr[j] && i>=0)
				{
					i--;
					j++;
				}
				if(arr[i]>arr[j] && i>=0)
				{
					arr[j]=arr[i];
				}
				else
				{	
					z=half-1;
					arr[z]++;
					while(arr[z]>9 && z>0)
					{
						arr[z]=0;
						arr[z-1]++;
						z--;
					}
				/*if(arr[0]==10)
					{
						printf("1");
						arr[0]=0;
						arr[count]=1;
					}
					*/
				}
			}
		}
		
		else
		{
			z=half;
			i=half-1;
			j=half+1;
			while(arr[i]==arr[j] && i>=0)
			{
					i--;
					j++;
				}
			if(arr[i]>arr[j] && i>=0)
			{
					arr[j]=arr[i];
				}
			else
			{
				z=half;
				arr[z]++;
				while(arr[z]>9 && z>0)
				{
					arr[z]=0;
					arr[z-1]++;
					z--;
				}
			
			
		/*	arr[z]++;
			while(arr[z]>9 && z>0)
			{
				arr[z]=0;
				arr[z-1]++;
				z--;
			}
		*/	
			}
		
			i=0;
			j=count-1;
			while(i<j)
			{
			arr[j]=arr[i];
			i++;
			j--;
			}
		
		//printing
			i=0;
			if(arr[count-1]==10)
			{
			arr[count-1]=1;
			
			}
		
			if(count<2)
			{
			printf("11\n");
			}
			else
			{
			while(i<count)
			{
				printf("%d",arr[i]);
				i++;
			}
			printf("\n");		
		}
		}
	cases--;
	}
}

