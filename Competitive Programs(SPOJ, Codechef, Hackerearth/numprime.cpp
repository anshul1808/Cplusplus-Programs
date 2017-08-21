#include<iostream>
#include<conio.h>
using namespace std;
main()
{
   int num[100],i,j=1;
			for(i=0; i<100; i++)
			{		
			   num[i]=j;	
			   printf("%d  ",num[i])  ;
						j++;
			}
			
			i=2;
			int product=0;
			while(i<26)
			{		j=2;
      while(product<100 && num[i]!=0)
			   {	
			      product=num[i]*j;
					    num[product-1]=0;
					    j++; 	
			   }
			   product=0;
			   i++;
			}
			
			for(i=0; i<100; i++)
			printf("%d  ", num[i]);
			getch();
}
