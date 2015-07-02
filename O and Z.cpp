#include <iostream>
#include <string.h>
using namespace std;
 
int main()
{
	int sum,count,n,i,x,sum1,count1,ans;
	char s[1000005];
    scanf("%d",&n);
    while(n--)
    {
    	sum1=count1=sum=count=0;
    	scanf("%s",s);
    	x=strlen(s);
    	for(i=x-1;i>=0;i--)
    	{
    		if(s[i]=='O')
    			count++;
    		else
    			sum+=count;
    	}
    	
    	for(i=0;i<x;i++)
    	{
    		if(s[i]=='O')
    		{
    		count1++;
    	
    		}
    		else{
    			
    				sum1+=count1;
    		}
    		
    	}
    	ans=min(sum,sum1);
    	printf("%d\n",ans);
    }
}
