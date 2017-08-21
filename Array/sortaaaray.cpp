#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int arr[6],i=0,temp,j;
	cout<<"enter 6 elements \n";
	while(i<6)
	{
		cin>>arr[i];
		i++;
	}
	
	for(i=0; i<6; i++)
	{
		for(j=0;(j+1)<(6-i);j++)
		{			
				if(arr[j]>arr[j+1])
				{
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
		}
	}
	i=0;
	while(i<6)
	{	cout<<" ";
		printf("%d", arr[i]);
		i++;
	}
}
