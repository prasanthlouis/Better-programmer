#include <stdio.h>
#include <vector>
#include <algorithm>
#include<iostream>
using namespace std;
 
int main()
{
    int test,bg,boys,girls,b,g,i,cpy,x,counter,j=0;
   vector<int>bo,go;
   scanf("%d",&test);
  
   while(test--)
   {
   scanf("%d%d",&b,&g);
   for(i=0;i<b;i++)
   {
   scanf("%d",&cpy);
   bo.push_back(cpy);
   }
   for(i=0;i<g;i++)
   {
   scanf("%d",&cpy);
   go.push_back(cpy);
   }
   sort(bo.begin(),bo.end());
   sort(go.begin(),go.end());
   for(i=0;i<b;i++)
   {
   	if(bo[i]>go[i])
   	{
   		continue;
   	}
   	else
   	break;
   	
   }
   if(i==b)
   printf("YES\n");
   else
   printf("NO\n");
   bo.clear();
   go.clear();
   }
}
