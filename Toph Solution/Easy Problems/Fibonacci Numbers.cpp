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

#define Max 51
int fb[Max];

void fb_num()
{
	fb[0]=0;
	fb[1]=1;
	for(int i =2;i<Max;i++)
	{
		fb[i]= fb[i-1] + fb[i-2];
		
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
	fb_num();
	cout<<fb[n]<<endl;
	return 0 ;
}