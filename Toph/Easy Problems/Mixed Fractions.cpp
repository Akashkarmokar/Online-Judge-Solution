#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	int dividend,divider;
	scanf("%d %d",&dividend,&divider);
	printf("%d %d %d",(dividend/divider),(dividend%divider),divider);
	return 0;
}