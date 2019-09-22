#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>

#define nl printf("\n")

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    char line[1024];
    bool open = true ;
    
    while(gets(line))
    {
        int len = strlen(line);
        for(int i = 0 ;i<len;i++)
        {
        	if(line[i]=='"')
        	{
        		if(open)
        			printf("``");
        		else
        			printf("''");
        		open=!open;
        	}
        	else
        	{
        		printf("%c",line[i]);
        	}
        }
        nl;
    }
    return 0;
}