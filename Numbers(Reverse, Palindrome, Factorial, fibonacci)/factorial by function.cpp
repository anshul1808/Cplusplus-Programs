#include<stdio.h>
#include<conio.h>
using namespace std;
int abc(int a, int b);
main()
{			
			int p,q, result;
			printf("Enter the numbers");
			scanf("%d %d", &p, &q);
			result=abc(p , q);
			printf("%d", result);
 			getch();
}
int abc(int a, int b)
{			
			int ans=1;
 		  while(b>0)
 		  {
			ans=ans*a;				 
			b--; 					
      }
			return(ans);	
}


