#include<iostream>
#include<conio.h>
using namespace std;
main()
{
  int arr[6], i=0, no, pos;
  puts("ENter 5 elemetns in array \n");
  while(i<5)
  {
  	scanf("%d", &arr[i]);
  	i++;
  }
  cout<<"Your array: ";
  for(i=0; i<5; i++)
  {
  	printf("%d  ", arr[i]);
  }	
  
  cout<<"\n\nenter the number you want to insert\n";
  cin>>no;
  cout<<"Enter the position\n";
  cin>>pos;
  
  pos--;
  i=4;
  while(pos<=i)
  {
  	arr[i+1]=arr[i];
  	i--;
  }
  arr[pos]=no;
  cout<<"the elements of array are\n";
  for(i=0; i<6; i++)
  {
  	cout<<arr[i]<<"  ";
  }
  
  
  getch();
  }
