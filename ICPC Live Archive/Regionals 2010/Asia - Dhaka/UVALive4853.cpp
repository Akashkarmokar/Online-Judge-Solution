#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
#endif
    for(int j = 1; ;j++)
    {
        int n ;
        cin>>n;
        if(n==0)
            break;
        int arr[n];
        int z = 0 ;
        for(int i = 0 ;i<n ;i++)
        {
            cin>>arr[i];
            if(arr[i]==0)
                z++;
        }
        int x = n - z;
        int ans = x - z ;
        cout<<"Case "<<j<<": "<<ans<<endl;
    }
    return 0;
}