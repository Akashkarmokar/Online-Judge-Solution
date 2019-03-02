/*
	Problem solved by Akash Karmokar Aditto
	Metropolitan Universtiy,Bangladesh.
	Department of Computer Science and Engineering
*/
#include<bits/stdc++.h>
#include <stdio.h>
using namespace std;
int scan_int(){
	int x;
	scanf("%d",&x);
	return x;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int test_case;
	test_case = scan_int();
	for(int i=0;i<test_case;i++){
		int N,m,negative_no=0;
		N = scan_int();
		for(int j=0;j<N;j++){
			m = scan_int();
			if(m<0){
				negative_no++;
			}
		}
		if(negative_no==0 || N==negative_no){
			printf("%d %d\n",N,N);
		}
		else{
			printf("%d %d\n",max(negative_no,N- negative_no),min(negative_no,N- negative_no));
		}
	}
	return 0;
}