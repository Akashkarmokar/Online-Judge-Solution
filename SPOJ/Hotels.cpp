#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("intput.txt","r",stdin);
// #endif
    ll n , m ;
    cin>>n>>m;
    ll arr[n];
    for(int i =0 ;i< n;i++)
    {
        cin>>arr[i];
    }
    // index for removing the element 
    int st = 0 ;
    ll max_so_far =arr[0];
    ll curr_max = arr[0];
    for(int i = 1 ;i<n ;i++)
    {
        curr_max = max(arr[i],curr_max+arr[i]);
        // thats the problem basic
        while(curr_max>=m)
        {
            curr_max-=arr[st++];
            if(curr_max == m)
                max_so_far = curr_max;
        } 
        //
        max_so_far = max(curr_max,max_so_far);
    }
    cout<<max_so_far<<endl;
    return 0;
}
