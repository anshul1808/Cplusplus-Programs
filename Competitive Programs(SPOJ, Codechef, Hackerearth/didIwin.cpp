#include<stdio.h>
using namespace std;
main()
{
 			int t, a[110]; 
			scanf("%d", &t);
			while(t--)
			{
			 					int i=0;
			 					int num,x;
			 					scanf("%d", &num);
			 					x=num;
			 					while(num--)
			 					{
			 					 						scanf("%d",&a[i]);
														i++;				 
			           }
			           num=x;
			  int j=0;
				
				int pairfound= 1;         
			 while(j<num)
			 {
			 					 int i=j+1;
			 					 while(i<num)
			          {        
			 					if(a[j]+a[i]==0)
			 					{
								  pairfound=0;
								  break;					 
			          }
			          i++;
			          }
			 j++;
			 }
			 if(pairfound==0)
			 {
				printf("YES\n");
			 }
			 else
			 printf("NO\n");
			 
		  }
			
			 			
}
