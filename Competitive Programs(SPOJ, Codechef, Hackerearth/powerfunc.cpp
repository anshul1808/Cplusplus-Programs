#include<stdio.h>
#include<conio.h>
using namespace std;
int prime(int num);
main()
{			
			int number,x, result;
			printf("Enter the number");
			scanf("%d", &number);
			result=prime(number);
			printf("%d", result);
 			getch();
}
int prime(int num)
{			
			int a=2;
			while(a<num)
			{
			 				if(num%a==0)
			 				{
							 					 num=num/a;
												 printf("%d \n", a);					 
							 }
							else
							a++;	
			}
}


