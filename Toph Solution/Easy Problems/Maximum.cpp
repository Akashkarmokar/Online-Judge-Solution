#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif
	int no;
	int result = 0 ;
	int new_value;
	scanf("%d",&no);
	for(int i=0 ;i<no;i++){
		scanf("%d",&new_value);
		if(new_value>result){
			result = new_value;
		}
	}
	printf("%d\n",result);
}