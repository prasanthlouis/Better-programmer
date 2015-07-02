#include <iostream>
#include <string.h>
 
using namespace std;
 
int main()
{
	int t,n,k,x,occ[10000],flagposs=0,i;
	char name[10000];
    scanf("%d",&t);
    while(t--)
    {
    	std::fill_n(occ,1002,0);
    	scanf("%d%d",&n,&k);
    
    	for(i=0;i<n;i++)
    	{
    		scanf("%s",name);
    		x=strlen(name);
    		occ[x]+=1;
    		
    	}
    	for(i=0;i<1002;i++)
    	{
    		if(occ[i]%k!=0)
    		flagposs=1;
    	
    	}
    
    	if(flagposs==0)
    	printf("Possible\n");
    	else
    	printf("Not possible\n");
    	flagposs=0;
    	
    }
}
