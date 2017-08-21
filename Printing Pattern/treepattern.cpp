#include<stdio.h>
#include<conio.h>
using namespace std;
main()
{		int rows, star=1, i=0;
   printf("Enter number of rows");
			scanf("%d", &rows);
			
			while(rows--)
			{
			   int space=0;
			   while(space<rows)
			   {
			      printf(" ");
				     space++;	
			   }
			   
			   while(star--)
			   {
							  printf("*");	
						}
						star=1;
						i=i+2;
						star=star+i;
						
						while(space--)
			   {
			      printf(" ");	
			   }
			   printf("\n");
			}
			getch();
}

