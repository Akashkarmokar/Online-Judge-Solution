#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif
	string str;
	cin>>str;
	int length = str.length();
	int value = length/2;
	for(int i = 0 ;i<value;i++){
		if(str[i]!=str[(length-1)-i]){
			cout<<"No"<<endl;
			return 0;
		}
	}
	cout<<"Yes"<<endl;
	return 0;

}