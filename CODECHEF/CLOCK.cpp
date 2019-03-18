#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif
	int test_case;
	int  hh,mm;
	scanf("%d",&test_case);
	for(int i =0;i<test_case;i++){
		scanf("%d %d",&hh,&mm);
		if(hh > 23 || mm>59){
			printf("Invalid Time\n");
		}
		else{
			if(hh>=12){
				hh = hh - 12;
			}
			double ans =(30*hh)-(5.5*mm);
			if(ans<0){
				ans = (-1)* ans;			}
			if(ans>180){
				ans = 360.0 - ans;
			}
			printf("%.1lf\n",ans);
		}
	}
	return 0;
}
