#include<stdio.h>
#include<conio.h>
using namespace std;
void disp(int *n);
void show(int **p);
main()
{
   int arr[]={55,66,77,8,99,44};
   int *i, *j;
   i=&arr[1];
   j=&arr[5];
   printf("%d %d", i-j, *i+*j);
		
	getch(); 		
}
