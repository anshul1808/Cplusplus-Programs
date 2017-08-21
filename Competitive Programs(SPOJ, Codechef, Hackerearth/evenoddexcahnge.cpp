#include<iostream>
#include<conio.h>
void swap(int *x, int *y);
using namespace std;
main()
{
   int num[10];
			for(int i=0; i<10; i++)
			{		
			   scanf("%d", &num[i]);
			}
			
			int i=0, j=0, temp;
		 while(i<10 && j<10)
		 {
		 while(i<10)
		 {
			   if(num[i]%2==0)
						{
							  break;	
						}
						i++;	
			}
			
			while(j<10)
		 {
			   if(num[j]%2!=0)
						{
							  break;	
						}
						j++;	
			}
				
				swap(&num[i],&num[j]);	
			}
				
			for(i=0; i<10; i++)
			{
      printf("%d  ", num[i]);
			}
			getch();
}

void swap(int *x, int *y)
{
   int temp;
			temp=*x;
			*x=*y;
			*y=temp;	
}
