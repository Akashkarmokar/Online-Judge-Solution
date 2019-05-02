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
	
	string s1,s2;
	cin>>s1;
	cin>>s2;
	int l1 = s1.length();
	int l2 = s2.length();
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());

	// cout<<s1<<endl;
	// cout<<s2<<endl;
	// cout<<l2<<endl;
	for(int i = 0 ;i<l2;i++)
	{
		if(s1[i]==s2[i])
		{
			continue;
		}
		else
		{
			cout<<"No"<<endl;
			return 0;
		}
	}
	cout<<"Yes"<<endl;
	return 0 ;
}