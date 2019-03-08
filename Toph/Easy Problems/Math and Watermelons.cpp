#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif
	int m,k;
	scanf("%d %d",&m,&k);
	printf("%d\n",m%k);
	return 0;
}