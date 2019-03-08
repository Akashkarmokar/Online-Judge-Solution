#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif
	int test_case;
	float x;
	float value=0,no;
	scanf("%d",&test_case);
	for(int i =1;i<=test_case;i++){
		scanf("%f",&no);
		value+= no;
		x = value/i;
		cout<<setprecision(10)<<x<<endl;
	}
	return 0;
}