#include<bits/stdc++.h>
using namespace std ;

int josephus(int n,int k)
{
	if(n==1)
		return 1;
	else
		return (josephus(n-1,k)+(k-1))%n + 1;
}

int main()
{
	int tc;cin>>tc;
	for(int i=1;i<=tc;i++)
	{
		int n,k;
		cin>>n>>k;
		cout<<"Case "<<i<<": "<<josephus(n,k)<<endl;
	}
	return 0;
}
