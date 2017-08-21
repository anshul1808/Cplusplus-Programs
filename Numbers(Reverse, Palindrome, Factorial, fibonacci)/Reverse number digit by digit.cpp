#include<stdio.h>
using namespace std;
main()
{			
			int T;
			scanf("%d", &T);
			while(T>0)
			{
 			 					int a, num,i,s=0;
								scanf("%d", &a);
								num=a;
								if(a>0)
								{
								while(num>9)
								{		
										i=num%10;
										s=(s*10)+i;
										num=num/10;
								}
								s=(s*10)+num;
								printf("%d \n", s);
								}
								else
								{
								 num=num*(-1);
								 while(num>9)
								{		
										i=num%10;
										s=(s*10)+i;
										num=num/10;
								}
								s=(s*10)+num;
								s=s*(-1);
								printf("%d \n", s); 		
							  }
								T--;
			}			
}
