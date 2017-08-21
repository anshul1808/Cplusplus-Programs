#include<iostream>
#include <map>
#include <string.h>
#include <stdlib.h>
#include <iterator>
using namespace std;
main()
{
	string source, destination, final, target;
	map <string, string> journey;
	map <string, string> revjourney;	
	int cases;
	cin>>cases;
	
	while(cases>0)
	{
		cin>>source>>destination;
		journey.insert(pair<string, string> (source,destination));
		revjourney.insert(pair<string, string> (destination,source));
		cases--;
	}
	
	
	map <string, string> ::iterator it1, it2;
	for(it1=journey.begin(); it1!=journey.end(); it1++)
	{	
		target=it1->first;
		it2=revjourney.find(target);
		if(it2==revjourney.end())
		{
			final=target + string("->");
			break;
		}
	}
	cout<<endl<<final<<target<<endl;	
	
		
while(journey.count(target)!=0)
{
	it1=journey.find(target);
	if(it1!=journey.end())
	{
		target=it1->second;
	}
	final=final+target+string("->");
}	

cout<<final;
	
	
	
	
	/*map <string, string> ::iterator it, it2;
	for(it=city.begin();it!=city.end(); it++)
	{
		cout<<it->first<<"  "<<it->second<<endl;
	}*/
}
