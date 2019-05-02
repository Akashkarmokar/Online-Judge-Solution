#include<bits/stdc++.h>

#define fastread ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vowel(a)  (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
#define vowelC(a) (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
#define swapx(x,y) x = x^y; y = x^y; x = x^y;
#define odd(number)  ((number & 1)==1)
#define even(number) ((number & 1)==0)
#define i64 long long 

using namespace std;

//________________________________________________________________________________________________
//
//                                 Happy Codding :) 
//________________________________________________________________________________________________
#define Max 1001
int prime[Max];
void sieve()
{
	prime[0]=1 ;
	prime[1]= 1;
	for(int i = 4 ;i<=Max-1 ;i+=2)
	{
		prime[i]= 1;
	}
	int sq = sqrt(Max);
	for(int i = 3 ;i<=sq;i+=2)
	{
		if(prime[i]==0)
		{
			for(int j = i*i ;j<=Max-1;j+=i)
			{
				prime[j]=1;
			}
		}
	}
}

int main()
{
	fastread;
	
	// #ifndef ONLINE_JUDGE
	// freopen("in.txt","r",stdin);
	// freopen("ou.txt","w",stdout);
	// #endif
	
	int n;
	cin>>n;
	sieve();
	if(prime[n]==0)
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
	return 0 ;
}