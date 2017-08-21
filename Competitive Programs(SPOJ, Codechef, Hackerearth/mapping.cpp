#include<iostream>
#include <map>
#include <stdlib.h>
#include <iterator>
using namespace std;
main()
{	int cases, a ,b,i,z;
	map <int,int > m1;
	
	cin>>cases;
	i=cases;
	while(i--)
	{
		int city,range;
		cin>>city>>range;
		m1.insert(pair<int , int> (city,range));
	}
		
	map <int, int> :: iterator it,it1;	
	for(it=m1.begin();it!=m1.end(); it++)
	{
		int target=it->first + it-> second;
		it1=m1.find(target);
		if(it1!=m1.end())
		{
			if(it1->first + it1->second == it->first)
			{
				cout<<"YES";
				exit(0);
			}
		}
	}
	cout<<"NO";
}
