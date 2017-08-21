#include<stdio.h>
#include<conio.h>
using namespace std;
int recur(int number);
main(){
		 int num,j=5,answer;
		 printf("Enter the number: ");
		 scanf("%d", &num);
		 answer=recur(num);
		 printf("The sum is: %d",answer);
		 getch();
}
int recur(int number){
	  						  int k,sum;
	  						  if(number<=9){
 												return(number);					 
                       }
	  						  else{
							  					k=number%10;
												sum=k+recur(number/10);														
                        }
                        return(sum);
	  						  
}
