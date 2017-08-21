#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int arr[5]={1,2,3,4,5}, arr2[5];
	cout<<"Elemets of array are: ";
	cout<<arr[0]<<"  "<<arr[1]<<"  "<<arr[2]<<"  "<<arr[3]<<"  "<<arr[4]<<" \n";
	
	int i=0;
	int j=4;
	while(i<5)
	{
		arr2[i]=arr[j];
		i++;
		j--;
	}
	for(i=0; i<5; i++)
	{
		cout<<arr2[i]<<" ";
	}
	
}
