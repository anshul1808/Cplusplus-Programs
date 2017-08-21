#include<iostream>
#include<conio.h>
using namespace std;
main()
{
  int i=0, no, pos,size;
  cout<<"Enter the size of array: ";
  cin>>size;
  int arr[size];
  puts("ENter elements of the array \n");
  while(i<size)
  {
  	scanf("%d", &arr[i]);
  	i++;
  }
  cout<<"your elements are: ";
  for(i=0; i<size; i++)
  {
  	printf("%d ", arr[i]);
  }	
  
  cout<<"\nEnter the position you want to delete\n";
  cin>>pos;
  
  pos--;
  i=pos;
  size=size-1;
  while(i<size)
  {
  	arr[i]=arr[i+1];
  	i++;
  }
  cout<<"\nthe elements of array are\n";
  for(i=0; i<size; i++)
  {
  	cout<<arr[i]<<" ";
  }
  
  
  getch();
  }
