#include<stdio.h>
#include<conio.h>
using namespace std;
int rect(int l, int b);
main()
{
 		int a,b,area;
 		printf("enter sides of rect \n");
 		scanf("%d %d", &a, &b);
 		area = rect(a,b);
 		printf("The area is = %d", area);
 		getch();

}
int rect(int l, int b)
{
 	  int s;
 	  s=l*b;
	  return(s); 	  
} 
