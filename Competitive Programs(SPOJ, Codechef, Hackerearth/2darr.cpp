#include<stdio.h>
#include<conio.h>
using namespace std;
int selsort(int arr[100], int first, int last);
main()
{			int arr[5];
				printf("Enter the 10 elements\n");
				for(int i=0; i<5; i++)
				{
				    printf("Array[%d]: ",i);
								scanf("%d", &arr[i]);   	
				}
				selsort(arr, 0,4);
				
				printf("\n Array sorted through 'selection sort' is:\n ");
				for (int i=0; i<5; i++)
				{
					   printf("%d  ", arr[i]);	
				}
				getch();
}

int selsort(int arr[100], int first, int last)
{
				 int i= first;
				 int j=i+1, temp;
					while(j<=last)
					{
						    if(arr[i]>arr[j])
						    {   
										    temp=arr[i];
						        arr[i]=arr[j];
						        arr[j]=temp;
						    }
										j++;	   	
					}
										i++;
				if(i<5)
				selsort(arr,i,last);
				

}
