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



int main()
{
	fastread;
	
	// #ifndef ONLINE_JUDGE
	// freopen("in.txt","r",stdin);
	// freopen("ou.txt","w",stdout);
	// #endif
	
	int n;
	cin>>n;
	int count = 0 ;
	for(int i = 1;i<=n;i++)
	{
		if(n%i==0) count++;
	}
	cout<<count-1<<endl;
	return 0 ;
}