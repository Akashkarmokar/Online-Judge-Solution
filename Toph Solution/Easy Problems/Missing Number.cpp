#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif
	int sum,a,b,c;
	scanf("%d",&sum);
	scanf("%d %d %d",&a,&b,&c);
	printf("%d",sum-(a+b+c));
	return 0;
}