#include<stdio.h>
using namespace std;
main()
{   
		int t;
		scanf("%d", &t);
		while(t--)
		{
 		int array[200];
		array[0]=1;	
		for(int i=1; i<200; i++)
 {
  			array[i]=0; 			
 }	
		int num;
		scanf("%d", &num);
		int ans=0;
		int x;
		
		while(num>0)
		{
		for(int i=0; i<158; i++)
		{
		 		  x=(array[i]*num)+ans;
		 		  if(x>=10)
		 		  {
 				  array[i]=x%10;
				  ans=x/10;
				  }
 		        if(x<10)
				  {
				  array[i]=x;
				  ans=0;
  				  }	  
		}
		num--;
		}
		int count=0;
		for(int j=157; j>=0; j--)
		{
		 			 if(array[j]>0)
		 			 {
						 count=1;
	 				 }
	 				 if(count==1)
	 				 {
					 printf("%d", array[j]);
					 } 			
		}
		printf("\n");
		}		
}
