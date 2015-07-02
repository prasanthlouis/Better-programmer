#include <iostream>
#include<string>
#include<cstring>
 
 
#include<stdio.h>
 
using namespace std;
 
int main()
{
	char s[100004];
	int a[100004];
	int dp[100004];
	int n,i;
	scanf("%d",&n);
	while(n--)
	{
		int x,count=0,maxi=0,flag=0;
		cin>>s;
	
		memset(a,0,sizeof(a));
		memset(dp,0,sizeof(dp));
		
		x=strlen(s);
		for(i=0;i<x;i++)
		{
			if(s[i]=='R')
			{
				a[i]=-1;
				count++;
			}
			else
			{
				a[i]=1;
			}
		}
		maxi=dp[0]=0;
		int maxseq=0,maxsofar=0;
		for(i=0;i<x;i++)
		{
			maxseq=maxseq+a[i];
			if(maxseq<0)
				maxseq=0;
			if(maxseq>maxsofar)
				maxsofar=maxseq;
			//dp[i]=max(a[i],a[i]+a[i-1]);
			//maxi=max(maxi,dp[i]);
		
		}
		for(i=0;i<x;i++)
		{
			if(a[i]!=-1)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		cout<<maxsofar+count<<endl;
		else
		cout<<x-1<<endl;
	
	
	}
}
