#include<stdio.h>
#include<conio.h>
using namespace std;
float square(float a);
main()
{
 	  float x,multi;
 	  printf("enter any two decimal numbers");
 	  scanf("%f", &x);
 	  multi=square(x);
 	  printf("the square is =%f", multi);
	  getch();	  
}
float square(float a)
{		
		float b;
		b=a*a;
		return(b); 		
}
