#include<stdio.h>
#include<algorithm>
using namespace std;
main()
{
	int men[1000],lady[1000];
	int i,N,tcases,hot=0;
	scanf("%d", &tcases);
	while(tcases>0)
	{
		scanf("%d", &N);
		i=0;
		while(i<N)
		{
			scanf("%d",&men[i]);
			i++;
		}
		i=0;
		while(i<N)
		{
			scanf("%d",&lady[i]);
			i++;
		}
		sort(men,men+i);//sorting
		sort(lady,lady+i);
		
		i=0;
		while(i<N)
		{
			hot=hot+(men[i]*lady[i]);
			i++;
		}
		printf("%d\n",hot);
		hot=0;
		tcases--;
	}
}
