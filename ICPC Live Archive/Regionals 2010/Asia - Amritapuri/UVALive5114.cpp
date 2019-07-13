//               Akash Karmokar 
//    Metropolitan University,Sylhet,Bangladesh.
//    Email : akashcsemu@gmail.com

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
// #endif
    ll tc;
    cin>>tc;
    for(ll i = 0 ;i<tc;i++)
    {
        
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        for(ll j = 0 ;j<n ;j++)
        {
            cin>>arr[j];
        }
        sort(arr,arr+n);
        ll mn = 1000000010;
        for(ll j = 0 ;j+k-1<n;j++)
        {
            ll pp =arr[j+k-1]- arr[j];
            mn = min(mn,pp);
        }
        cout<<mn<<endl;
    }
    return 0;
}